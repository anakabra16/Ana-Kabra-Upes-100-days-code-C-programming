#include<stdio.h>
int main(){
    int unit,rate;
    printf("enter unit: ");
    scanf("%d",&unit);

    if (unit<100){
    rate = unit * 5;
    printf("bill is: %d\n",rate);
    }

    else if (unit<=200){
        rate = unit * 7;
        printf("bill is: %d\n",rate);
    }

    else if (unit<=300){
    rate = unit * 10;
    printf("bill is: %d\n",rate);
    }

    else{
         rate = unit * 12;
    printf("bill is: %d\n",rate);

    }
}