#include<stdio.h>

int main(){

    int num,sum,i;
      
      sum =0;


    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i += 2) {
        
      sum = sum + i;
   }
   printf("Sum of odd numbers upto %d is %d\n",num,sum);
   
    return 0;
}  
