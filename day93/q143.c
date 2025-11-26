#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    for(int i=0;i<5;i++)
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

    int idx = 0;
    for(int i=1;i<5;i++){
        if(s[i].marks > s[idx].marks)
            idx = i;
    }

    printf("\nTopper: %s %d %.2f\n", s[idx].name, s[idx].roll, s[idx].marks);
    return 0;
}
