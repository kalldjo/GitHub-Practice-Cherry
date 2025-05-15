#include <stdio.h>
#include "calculator.h"

int main() {
    int a, b, result;
    char op;

    printf("Simple Calculator ( +  -  *  / )\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            result = divide(a, b);
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
