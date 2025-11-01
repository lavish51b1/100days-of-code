#include<stdio.h>

int main(){

    int n,num,sum,i;
      
      sum =0;


    printf("Enter a number: ");
    scanf("%d",&n);

    num = 2*n-1;

    for(i=1; i<=num; i += 2) {
        
      sum = sum + i;
   }
   printf("Sum of odd numbers upto %d is %d\n",n,sum);
   
    return 0;
}  
