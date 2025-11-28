#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int id;
    char name[30];
    struct Date join;
};

int main() {
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Joining Date: %02d-%02d-%d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}
