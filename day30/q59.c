#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    return 0;
}
