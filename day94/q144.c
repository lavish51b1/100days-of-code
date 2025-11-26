#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

void printStudent(struct Student st) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", st.name, st.roll, st.marks);
}

int main() {
    struct Student s = {"Ravi", 12, 88.5};
    printStudent(s);
    return 0;
}
