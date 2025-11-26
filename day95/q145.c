#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int top = 0;
    for(int i=1; i<n; i++)
        if(s[i].marks > s[top].marks)
            top = i;

    return s[top];
}

int main() {
    struct Student s[3] = {
        {"Aman",1,70},
        {"Raj",2,88},
        {"Rohit",3,92}
    };

    struct Student t = getTopper(s, 3);

    printf("Topper: %s %d %.2f\n", t.name, t.roll, t.marks);
    return 0;
}
