#include <stdio.h>
#include <string.h>

#define MAX_CLOCKS 50
#define MAX_MAKE_LENGTH 20

struct clock {
    char make[MAX_MAKE_LENGTH + 1];
    char color[20];
    int price;
    int guarantee;
};

typedef struct clock Clock;

void add_clock(Clock clocks[], int *num_clocks) {
    if (*num_clocks >= MAX_CLOCKS) {
        printf("Maximum number of clocks reached!\n");
        return;
    }

    Clock new_clock;
    printf("Enter clock make: ");
    scanf("%s", new_clock.make);
    printf("Enter clock color: ");
    scanf("%s", new_clock.color);
    printf("Enter clock price: ");
    scanf("%d", &new_clock.price);
    printf("Enter clock guarantee (in months): ");
    scanf("%d", &new_clock.guarantee);

    clocks[*num_clocks] = new_clock;
    (*num_clocks)++;

    printf("Clock added successfully!\n");
}

void print_clocks_by_make(Clock clocks[], int num_clocks, const char *make) {
    printf("Clocks with make '%s':\n", make);
    int i;
    for (i = 0; i < num_clocks; i++) {
        if (strcmp(clocks[i].make, make) == 0) {
            printf("Make: %s, Color: %s, Price: %d, Guarantee: %d months\n",
                   clocks[i].make, clocks[i].color, clocks[i].price, clocks[i].guarantee);
        }
    }
}

void print_clocks_in_price_range(Clock clocks[], int num_clocks, int p1, int p2) {
    printf("Clocks with prices between %d and %d:\n", p1, p2);
    int i;
    for (i = 0; i < num_clocks; i++) {
        if (clocks[i].price >= p1 && clocks[i].price <= p2) {
            printf("Make: %s, Color: %s, Price: %d, Guarantee: %d months\n",
                   clocks[i].make, clocks[i].color, clocks[i].price, clocks[i].guarantee);
        }
    }
}

void sort_clocks_by_price_descending(Clock clocks[], int num_clocks) {
    int i, j;
    for (i = 0; i < num_clocks - 1; i++) {
        for (j = 0; j < num_clocks - i - 1; j++) {
            if (clocks[j].price < clocks[j + 1].price) {
                Clock temp = clocks[j];
                clocks[j] = clocks[j + 1];
                clocks[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num_clocks = 0;
    Clock clocks[MAX_CLOCKS];

    int choice;
    do {
        printf("\n=========================\n");
        printf("1. Add a clock\n");
        printf("2. Print clocks by make\n");
        printf("3. Print clocks in price range\n");
        printf("4. Print clocks in descending order of price\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_clock(clocks, &num_clocks);
                break;
            case 2: {
                char make[MAX_MAKE_LENGTH + 1];
                printf("Enter make: ");
                scanf("%s", make);
                print_clocks_by_make(clocks, num_clocks, make);
                break;
            }
            case 3: {
                int p1, p2;
                printf("Enter price range (p1 p2): ");
                scanf("%d %d", &p1, &p2);
                print_clocks_in_price_range(clocks, num_clocks, p1, p2);
                break;
            }
            case 4:
                sort_clocks_by_price_descending(clocks, num_clocks);
                printf("Clocks sorted in descending order of price:\n");
                int i;
				for (i = 0; i < num_clocks; i++) {
                    printf("Make: %s, Price: %d\n", clocks[i].make, clocks[i].price);
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

