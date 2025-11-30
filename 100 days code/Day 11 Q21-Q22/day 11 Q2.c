#include<stdio.h>

int main(){
    float a,b;
    float profit,loss,sp,cp, profit_percentage,loss_percentage ;
    printf("enter cost price then selling price: ");
    scanf("%f %f", &a,&b);

    if (sp>cp){
    profit_percentage = (sp-cp / cp)*100;
    printf("the profit is: ");
    scanf("%f", &profit_percentage) ;
    }


    else if (cp>sp){
    loss_percentage = (cp-sp / cp)*100;
    printf("the loss is: ");
    scanf("%f", &loss_percentage) ;

    }

    else
    ptintf("no profit no loss");
}