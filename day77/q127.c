#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *in = fopen("input.txt","r");
    FILE *out = fopen("output.txt","w");

    if(in == NULL){
        printf("input.txt missing!");
        return 0;
    }

    int c;

    while((c = fgetc(in)) != EOF){
        fputc(toupper(c), out);
    }

    fclose(in);
    fclose(out);

    printf("Converted to uppercase!");
}
