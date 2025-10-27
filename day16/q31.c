#include <stdio.h>

int main() {
    int n, i = 1, bin = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    while(n > 0) {
        bin = bin + (n % 2) * i;
        n = n / 2;
        i = i * 10;
    }
    printf("Binary: %d\n", bin);
    return 0;
}


