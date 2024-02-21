#include <stdio.h>
#include <math.h>

void quadraticEquation();
void bankDepositProblem();

int main() {
    int choice;

    do {
        printf("1- Quadratic equation (Phuong trinh bac 2)\n");
        printf("2- Bank deposit problem\n");
        printf("3- Quit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                quadraticEquation();
                break;
            case 2:
                bankDepositProblem();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

void quadraticEquation() {
    double a, b, c;
    double delta, solution1, solution2;

    printf("Enter coefficients (a, b, c) of the quadratic equation: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        solution1 = (-b + sqrt(delta)) / (2 * a);
        solution2 = (-b - sqrt(delta)) / (2 * a);
        printf("Solutions are real and distinct: %.2f and %.2f\n", solution1, solution2);
    } else if (delta == 0) {
        solution1 = -b / (2 * a);
        printf("Solution is real and equal: %.2f\n", solution1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        printf("Solutions are complex and conjugates: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

void bankDepositProblem() {
    double principal, monthlyRate, amount;
    int numberOfMonths;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter monthly interest rate (as a decimal, e.g., 0.05 for 5%%): ");
    scanf("%lf", &monthlyRate);

    printf("Enter number of months: ");
    scanf("%d", &numberOfMonths);

    if (principal <= 0 || monthlyRate <= 0 || monthlyRate > 0.1 || numberOfMonths <= 0) {
        printf("Invalid input. Please enter valid values.\n");
        return;
    }

    amount = principal * pow(1 + monthlyRate, numberOfMonths);

    printf("The final amount after %d months is: %.2f\n", numberOfMonths, amount);
}

