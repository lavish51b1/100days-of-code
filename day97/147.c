#include <stdio.h>

struct Emp {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Emp e, e2;
    FILE *fp;

    printf("Enter ID, Name, Salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.salary);

    fp = fopen("emp.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("\n--- Stored Employee ---\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
