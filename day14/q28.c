#include<stdio.h>

int main(){

    int num,mult=1,i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=2;i<=num; i+=2){
        
        mult = mult * i;
}
       
     if (num==0 || num==1)
         printf("Choose number >= 2\n");

        else
            printf("Product of even numbers upto %d is %d\n", num ,mult);

return 0;
}
