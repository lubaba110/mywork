#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    
    printf("Welcome to the Fun Calculator!\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Fun Fact \n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 5) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is undefined.\n");
                }
                break;
            case 5:
                if ((int)num2 != 0) {
                    printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                } else {
                    printf("Error: Modulus by zero is undefined.\n");
                }
                break;
        }
    } else if (choice == 6) {
        printf("Fun Fact: Did you know the word 'calculator' comes from the Latin word 'calculare,' meaning 'to count'?\n");
    } else {
        printf("Invalid choice. Please restart the program and try again.\n");
    }

    printf("Thanks for using the Fun Calculator! Have a great day!\n");
    return 0;
}

