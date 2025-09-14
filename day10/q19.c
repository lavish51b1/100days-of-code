#include<stdio.h>

int main () {

int a, b, c;

printf("Length of first side is: ");
scanf("%d", &a);

printf("Length of second side is: ");
scanf("%d", &b);

printf("Length of third side is: ");
scanf("%d", &c);

if ( (a>b && a>c && b!=c) || (b>c && b>a && c!=a) || (c>a && c>b && a!=b)) {
    printf("It is scalene triangle\n");
}

else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=c)) {
    printf("It is isoceles triangle\n");
}

else {
    printf("It is equilatral triangle\n");
}

return 0;


}
