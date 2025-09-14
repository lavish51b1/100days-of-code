#include<stdio.h>

int main() {
    float cp, sp, loss, profit, loss_per, profit_per;

    printf("Cost price: ");
    scanf("%f",&cp);

    printf("Selling price: ");
    scanf("%f",&sp);

    if(cp>sp){
        loss = cp-sp;
        loss_per = loss*100/cp;
        printf("Loss percentage = %f\n",loss_per);
    }
    
    else if(sp>cp){
        profit = sp-cp;
        profit_per = profit*100/cp;
        printf("Profit percentage = %f\n",profit_per);
    }

    else 
        printf("Neither profit nor loss\n");


    return 0;
}


