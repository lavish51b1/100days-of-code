#include<stdio.h>

int main(){

    int days, fine, n1, n2;

    printf("No. of days user is late: ");
    scanf("%d", &days);

    if( days<=5 && days>0){
        fine = days*2;
        printf("Total fine is %d Doller\n",fine);
    }
    else if ( days > 5 && days <= 10){
        n1 = days-5;
        fine= n1*4 + 10;
        printf("Total fine is %d Doller\n", fine);
    }
    else if ( days>10 && days <=30){
        n2 = days-10;
        fine = n2*6 +30; 
        printf("Total fine is %d Doller\n", fine);
    }
    else if ( days <1){
        printf("Beta masti nahi\n");
    }
    else 
        printf("Membership Cancelled\n");

        return 0;

}
