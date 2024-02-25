#include <stdio.h>
#include <math.h>

void quadraticEquation(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        printf("The solutions are: %.2f and %.2f\n", root1, root2);
    } else if (delta == 0) {
        double root = -b / (2 * a);
        printf("The only solution is: %.2f\n", root);
    } else {
        printf("No real solutions exist.\n");
    }
}

double bankDeposit(double deposit, double yearlyRate, int numYears) {
    return deposit * pow(1 + yearlyRate, numYears);
}

int main() {
    int choice;
    do {
        printf("Menu:\n");
        printf("1- Quadratic equation\n");
        printf("2- Bank deposit problem\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    double a, b, c;
                    printf("Enter a, b, c of the quadratic equation: ");
                    scanf("%lf %lf %lf", &a, &b, &c);
                    quadraticEquation(a, b, c);
                }
                break;
            case 2:
                {
                    double deposit, yearlyRate;
                    int numYears;
                    printf("Enter deposit, yearly rate (as a decimal), and number of years: ");
                    scanf("%lf %lf %d", &deposit, &yearlyRate, &numYears);
                    if (deposit <= 0 || yearlyRate <= 0 || yearlyRate >= 1 || numYears <= 0) {
                        printf("Invalid input. Please enter positive values.\n");
                    } else {
                        double amount = bankDeposit(deposit, yearlyRate, numYears);
                        printf("Amount after %d years: %.2f\n", numYears, amount);
                    }
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

