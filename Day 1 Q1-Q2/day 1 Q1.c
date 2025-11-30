#include<stdio.h>
int main(){
    int x,y,sum=0;
    printf("enter first number: ");
    scanf("%d",&x);

    printf("enter two number: ");
    scanf("%d",&y);

    sum= x+y;
    printf("the sum of %d and %d is:%d\n ", x,y,sum);
}