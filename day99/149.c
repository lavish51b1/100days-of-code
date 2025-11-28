#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
    char name[20];
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    if(s == NULL) {
        printf("Memory Not Allocated!");
        return 0;
    }

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll No: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}
