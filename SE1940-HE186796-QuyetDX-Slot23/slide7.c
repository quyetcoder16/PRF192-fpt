#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 50
#define MAX_CODE_LENGTH 8
#define MAX_NAME_LENGTH 20
#define MAX_CATEGORY_LENGTH 12

struct item {
    char code[MAX_CODE_LENGTH + 1];
    char name[MAX_NAME_LENGTH + 1];
    double price;
    char category[MAX_CATEGORY_LENGTH + 1];
};

typedef struct item Item;

void add_item(Item items[], int *num_items) {
    if (*num_items >= MAX_ITEMS) {
        printf("Maximum number of items reached!\n");
        return;
    }

    Item new_item;
    printf("Enter item code: ");
    scanf("%s", new_item.code);
    printf("Enter item name: ");
    scanf("%s", new_item.name);
    printf("Enter item price: ");
    scanf("%lf", &new_item.price);
    printf("Enter item category: ");
    scanf("%s", new_item.category);

    items[*num_items] = new_item;
    (*num_items)++;

    printf("Item added successfully!\n");
}

void print_items_by_category(Item items[], int num_items, const char *category) {
    printf("Items in category '%s':\n", category);
    int i;
    for (i = 0; i < num_items; i++) {
        if (strcmp(items[i].category, category) == 0) {
            printf("Code: %s, Name: %s, Price: %.2lf\n",
                   items[i].code, items[i].name, items[i].price);
        }
    }
}

void remove_item_by_code(Item items[], int *num_items, const char *code) {
    int i, j;
    int found = 0;
    for (i = 0; i < *num_items; i++) {
        if (strcmp(items[i].code, code) == 0) {
            found = 1;
            for (j = i; j < *num_items - 1; j++) {
                items[j] = items[j + 1];
            }
            (*num_items)--;
            printf("Item with code %s removed successfully!\n", code);
            break;
        }
    }
    if (!found) {
        printf("Item with code %s not found!\n", code);
    }
}

void sort_items_by_category_then_name(Item items[], int num_items) {
    int i, j;
    for (i = 0; i < num_items - 1; i++) {
        for (j = 0; j < num_items - i - 1; j++) {
            if (strcmp(items[j].category, items[j + 1].category) > 0 ||
                (strcmp(items[j].category, items[j + 1].category) == 0 &&
                 strcmp(items[j].name, items[j + 1].name) > 0)) {
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num_items = 0;
    Item items[MAX_ITEMS];

    int choice;
    do {
        printf("\n=========================\n");
        printf("1. Add an item\n");
        printf("2. Print items by category\n");
        printf("3. Remove an item\n");
        printf("4. Print items in ascending order by category then name\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_item(items, &num_items);
                break;
            case 2: {
                char category[MAX_CATEGORY_LENGTH + 1];
                printf("Enter category: ");
                scanf("%s", category);
                print_items_by_category(items, num_items, category);
                break;
            }
            case 3: {
                char code[MAX_CODE_LENGTH + 1];
                printf("Enter item code to remove: ");
                scanf("%s", code);
                remove_item_by_code(items, &num_items, code);
                break;
            }
            case 4:
                sort_items_by_category_then_name(items, num_items);
                printf("Items in ascending order by category then name:\n");
                int i;
				for ( i = 0; i < num_items; i++) {
                    printf("Category: %s, Name: %s\n", items[i].category, items[i].name);
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

