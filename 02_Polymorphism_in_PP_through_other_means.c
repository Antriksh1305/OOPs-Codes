#include <stdio.h>

void operation(int a, int b, int op_type) {
    switch (op_type)
    {
    case 1:
        printf("Addition: %d\n", a + b);
        break;
    case 2:
        printf("Multiplication: %d\n", a * b);
        break;
    default:
        printf("Invalid Operation\n");
    }
}

int main() {
    // Switch-Case or If-Else Chains can be used to implement Polymorphism in C or C++ too
    operation(5, 3, 1); // Addition
    operation(5, 3, 2); // Multiplication
    return 0;
}