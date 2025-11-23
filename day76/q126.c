#include<stdio.h>

int main(){
    char fname[50];
    printf("Enter filename: ");
    scanf("%s",fname);

    FILE *fp = fopen(fname,"r");

    if(fp == NULL){
        printf("Error! File does not exist.");
        return 0;
    }

    char line[200];

    while(fgets(line,200,fp) != NULL){
        printf("%s",line);
    }

    fclose(fp);
}
