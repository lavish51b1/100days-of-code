#include<stdio.h>
  
int main() {
  
  int a,b, temp;
   
   printf("enter first number(0-9): ");
   scanf("%d",&a);
   
   printf("enter second (0-9): ");
   scanf("%d",&b);
  
  temp = b;
  b = a;
  a = temp;
  
   printf(" number before swap = %d %d\n", b,a);
  
   printf(" number after swap = %d %d\n", a,b);
 
     return 0;
}
  

