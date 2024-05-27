#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Add the two integers
    sum = num1 + num2;

    // Display the result
    printf("Sum: %d\n", sum);

    return 0;
}
