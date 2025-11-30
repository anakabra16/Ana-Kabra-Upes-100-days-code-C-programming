#include<stdio.h>
int main(){
    int x,y;
    int sum,prod,diff,div;
    printf("enter first number: ");
    scanf("%d",&x);

    printf("enter your second number: ");
    scanf("%d",&y);

    sum= x+y;
    prod= x*y;
    diff= x-y;
    if (y != 0)
    div= (float) x/y;

    printf("the sum of %d and %d is: %d\n", x,y,sum);
    printf("the prod of %d and %d is: %d\n",x,y,prod);
    printf("the diff of %d and %d is: %d\n",x,y,diff);
    printf("the div of %d and %d is: %d\n",x,y,div);
}