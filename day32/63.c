#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    int merged[n1 + n2];
    for (i = 0; i < n1; i++) merged[i] = a[i];
    for (j = 0; j < n2; j++) merged[n1 + j] = b[j];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);

    return 0;
}
