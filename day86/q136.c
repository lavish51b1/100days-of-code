#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b;
    enum Menu op;

    printf("1. Add\n2. Subtract\n3. Multiply\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    op = choice;

    switch(op) {
        case ADD: printf("Sum = %d\n", a+b); break;
        case SUBTRACT: printf("Difference = %d\n", a-b); break;
        case MULTIPLY: printf("Product = %d\n", a*b); break;
        default: printf("Invalid choice");
    }

    return 0;
}
