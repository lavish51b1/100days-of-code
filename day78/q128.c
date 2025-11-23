#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp = fopen("sample.txt","r");

    if(fp == NULL){
        printf("File missing!");
        return 0;
    }

    int c;
    int v=0, cons=0;

    while((c = fgetc(fp)) != EOF){
        c = tolower(c);

        if(c>='a' && c<='z'){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                v++;
            else
                cons++;
        }
    }

    printf("Vowels: %d\n",v);
    printf("Consonants: %d\n",cons);

    fclose(fp);
}
