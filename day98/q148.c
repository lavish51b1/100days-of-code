#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
};

int main() {
    struct Student s1, s2;

    printf("Enter 1st Student (Roll Name): ");
    scanf("%d %s", &s1.roll, s1.name);

    printf("Enter 2nd Student (Roll Name): ");
    scanf("%d %s", &s2.roll, s2.name);

    if(s1.roll == s2.roll && strcmp(s1.name, s2.name) == 0)
        printf("\nBoth structs are SAME.\n");
    else
        printf("\nStructs are DIFFERENT.\n");

    return 0;
}
