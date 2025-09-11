#include<stdio.h>
#include<math.h>
 
int main () {
  
    float p, r, t, si, amt, ci;
    int n;
 
    printf("Principal: ");
    scanf("%f", &p);
  
    printf("Rate: ");
    scanf("%f", &r);
 
    printf("Time(in years): ");
    scanf("%f",&t);
  
    printf("Number of times interest applied per period: ");
    scanf("%d", &n);
  
    si = p*r*t/100;
    amt = p* pow(1 + r/(n*100), n*t);
  
    ci = amt - p;
  
    printf("simple interest is: %f\n", si);
    printf("compound interest is: %f\n", ci);
 
   return 0;
}
 // here i am using math liberary.So, compile by gcc Q9.c -lm and run by ./a.out
  

