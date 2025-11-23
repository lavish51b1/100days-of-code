#include<stdio.h>

int main(){
    FILE *fp = fopen("numbers.txt","r");

    if(fp == NULL){
        printf("numbers.txt not found!");
        return 0;
    }

    int num;
    int sum = 0, cnt = 0;

    while(fscanf(fp,"%d",&num) != EOF){
        sum += num;
        cnt++;
    }

    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",(float)sum/cnt);

    fclose(fp);
}
