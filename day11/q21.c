#include<stdio.h>

int main() {

    int num;

    printf("Enter a number(1-12): ");
    scanf("%d", &num);

    switch (num) {

        case 1 : printf("It's January\nIt have 31 days\n");
                 break;
        
        case 2 : printf("It's February\n");
                 int leap, year;

                 printf("Enter a year: ");
                 scanf("%d", &year);

                 leap = year%4;
                 if (leap == 0)
                     printf("It have 29 days\n");
                 else
                     printf("It have 28 days\n");

                 break;

        case 3 : printf("It's March\nIt have 31 days\n");
                 break;

        case 4 : printf("It's April\nIt have 30 days\n");
                 break;

        case 5 : printf("It's May\nIt have 31 days\n");
                 break;

        case 6 : printf("It's June\nIt have 30 days\n");
                 break;

        case 7 : printf("It's July\nIt have 31 days\n");
                 break;

        case 8 : printf("It's August\nIt have 31 days\n");
                 break;

        case 9 : printf("It's September\nIt have 30 days\n");
                 break;

        case 10 : printf("It's October\nIt have 31 days\n");
                  break;

        case 11 : printf("It's November\nIt have 30 days\n");
                  break;

        case 12 : printf("It's December\nIt have 31 days\n");
                  break;

        default : printf("Not a valid input\n");

    }

    return 0;

}



