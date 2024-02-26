#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidISBN(char isbn[]) {
    int i, sum = 0;
    for (i = 0; i < 9; i++) {
        sum += (isbn[i] - '0') * (10 - i);
    }
    sum += (isbn[9] - '0');

    return (sum % 11 == 0);
}

int main() {
    char isbn[11];
    while (true) {
        printf("ISBN (0 to quit): ");
        scanf("%s", isbn);
        if (strcmp(isbn, "0") == 0) {
            printf("Have a Nice Day!\n");
            break;
        }
        if (strlen(isbn) == 10 && isValidISBN(isbn)) {
            printf("This is a valid ISBN.\n");
        } else {
            printf("This is not a valid ISBN.\n");
        }
    }

    return 0;
}

