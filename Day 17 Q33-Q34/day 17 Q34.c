#include<stdio.h>
int main(){
    int num,i,temp = 0;
    printf("enter number: ");
    scanf("%d",&num);

    if (i <= 1)
    printf("not a prime number");

    for(i = 2 ; i <= num / 2 ; i++)
    if(num % i == 0)
    temp = 1;
    
    
    if (temp==0)
    printf("its prime");
    
    else
    printf("its not prime");
    }