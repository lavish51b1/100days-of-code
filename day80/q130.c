#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("students.txt","w");

    int n;
    printf("How many students? ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        char name[50];
        int roll;
        int marks;

        printf("Name Roll Marks: ");
        scanf("%s %d %d",name,&roll,&marks);

        fprintf(fp,"%s %d %d\n",name,roll,marks);
    }

    fclose(fp);

    fp = fopen("students.txt","r");

    printf("\n--- Student Records ---\n");

    char nm[50];
    int r,m;

    while(fscanf(fp,"%s %d %d",nm,&r,&m) != EOF){
        printf("%s %d %d\n",nm,r,m);
    }

    fclose(fp);
}
