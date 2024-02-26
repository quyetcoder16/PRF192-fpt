#include <stdio.h>
#include <string.h>

#define MAX_DRINKS 50
#define MAX_NAME_LENGTH 20
#define MAX_MAKE_LENGTH 20

struct soft_drink {
    char name[MAX_NAME_LENGTH + 1];
    char make[MAX_MAKE_LENGTH + 1];
    int volume;
    int price;
    int duration;
};

typedef struct soft_drink SoftDrink;

void add_soft_drink(SoftDrink drinks[], int *num_drinks) {
    if (*num_drinks >= MAX_DRINKS) {
        printf("Maximum number of soft drinks reached!\n");
        return;
    }

    SoftDrink new_drink;
    printf("Enter drink name: ");
    scanf("%s", new_drink.name);
    printf("Enter drink make: ");
    scanf("%s", new_drink.make);
    printf("Enter drink volume: ");
    scanf("%d", &new_drink.volume);
    printf("Enter drink price: ");
    scanf("%d", &new_drink.price);
    printf("Enter drink duration (in days): ");
    scanf("%d", &new_drink.duration);

    drinks[*num_drinks] = new_drink;
    (*num_drinks)++;

    printf("Soft drink added successfully!\n");
}

void print_drinks_by_make(SoftDrink drinks[], int num_drinks, const char *make) {
    printf("Soft drinks with make '%s':\n", make);
    int i;
    for (i = 0; i < num_drinks; i++) {
        if (strcmp(drinks[i].make, make) == 0) {
            printf("Name: %s, Volume: %d ml, Price: %d, Duration: %d days\n",
                   drinks[i].name, drinks[i].volume, drinks[i].price, drinks[i].duration);
        }
    }
}

void print_drinks_in_volume_range(SoftDrink drinks[], int num_drinks, int v1, int v2) {
    printf("Soft drinks with volumes between %d ml and %d ml:\n", v1, v2);
    int i;
    for (i = 0; i < num_drinks; i++) {
        if (drinks[i].volume >= v1 && drinks[i].volume <= v2) {
            printf("Name: %s, Volume: %d ml, Price: %d, Duration: %d days\n",
                   drinks[i].name, drinks[i].volume, drinks[i].price, drinks[i].duration);
        }
    }
}

void sort_drinks_by_volume_then_price(SoftDrink drinks[], int num_drinks) {
    int i, j;
    for (i = 0; i < num_drinks - 1; i++) {
        for (j = 0; j < num_drinks - i - 1; j++) {
            if (drinks[j].volume > drinks[j + 1].volume ||
                (drinks[j].volume == drinks[j + 1].volume && drinks[j].price > drinks[j + 1].price)) {
                SoftDrink temp = drinks[j];
                drinks[j] = drinks[j + 1];
                drinks[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num_drinks = 0;
    SoftDrink drinks[MAX_DRINKS];

    int choice;
    do {
        printf("\n=========================\n");
        printf("1. Add a soft drink\n");
        printf("2. Print soft drinks by make\n");
        printf("3. Print soft drinks in volume range\n");
        printf("4. Print soft drinks in ascending order of volume then price\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_soft_drink(drinks, &num_drinks);
                break;
            case 2: {
                char make[MAX_MAKE_LENGTH + 1];
                printf("Enter make: ");
                scanf("%s", make);
                print_drinks_by_make(drinks, num_drinks, make);
                break;
            }
            case 3: {
                int v1, v2;
                printf("Enter volume range (v1 v2): ");
                scanf("%d %d", &v1, &v2);
                print_drinks_in_volume_range(drinks, num_drinks, v1, v2);
                break;
            }
            case 4:
                sort_drinks_by_volume_then_price(drinks, num_drinks);
                printf("Soft drinks sorted in ascending order of volume then price:\n");
                int i;
				for (i = 0; i < num_drinks; i++) {
                    printf("Volume: %d ml, Price: %d\n", drinks[i].volume, drinks[i].price);
                }
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

