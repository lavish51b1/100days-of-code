#include<stdio.h>
int main(){

    int num,digit,rev;

    printf("Enter your number: ");
    scanf("%d", &num);

    for(; num !=0; num =num/10){
        digit = num %10;
        rev = rev*10 + digit;
    }
    return 0;
}

