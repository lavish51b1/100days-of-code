#include<stdio.h>
   
int main() {
   
  float c, F;
  
     printf("Enter the Temperature in degree celsius: ");
     scanf("%f", &c);
   
     F = (c*9/5) + 32;
  
     printf("temperature in fahrenheit is: %f\n", F);
  
return 0;
}
  

