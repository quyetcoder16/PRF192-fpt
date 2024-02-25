#include <stdio.h>


int isValidDate(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12 || day < 1)
        return 0;
    int maxDays;
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                maxDays = 29;
            else
                maxDays = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;
        default:
            maxDays = 31;
    }
    return day <= maxDays;
}

void printASCII(char start, char end) {
    printf("Output:\n");
    char c;
	for (c = start; c >= end; c--) {
        printf("%c: %d, %xh\n", c, c, c);
    }
}

int main() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1- Processing date data\n");
        printf("2- Character data\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int day, month, year;
                    printf("Enter day, month, year: ");
                    scanf("%d%d%d", &day, &month, &year);
                    if (isValidDate(day, month, year))
                        printf("The date is valid.\n");
                    else
                        printf("The date is not valid.\n");
                }
                break;
            case 2:
                {
                    char start, end;
                    printf("Enter two characters: ");
                    scanf(" %c %c", &start, &end);
                    printASCII(start, end);
                }
                break;
            case 3:
                printf("Quitting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 3.\n");
        }
    } while (choice != 3);

    return 0;
}

