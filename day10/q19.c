#include <stdio.h>

int main() {
    int a, b, c;

    printf("Length of first side is: ");
    scanf("%d", &a);

    printf("Length of second side is: ");
    scanf("%d", &b);

    printf("Length of third side is: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("It is an equilateral triangle\n");
    } 
    else if (a == b || a == c || b == c) {
        printf("It is an isosceles triangle\n");
    } 
    else {
        printf("It is a scalene triangle\n");
    }

    return 0;
}

