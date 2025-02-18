 #include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input: Read two integers and the operator
    scanf("%d %d %c", &num1, &num2, &operator);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error ");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}