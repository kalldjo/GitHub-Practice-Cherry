int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
