#include<stdio.h>
int main(){
     int x,y;
     printf("enter first number: ");
     scanf("%d",&x);

     printf("enter second number: ");
     scanf("%d",&y);

     printf("\nbeforeswapping x=%d && y=%d\n", x,y);

     
     x=y+x;
     y=x-y;
     x=x-y;

     printf("\n after swapping x=%d && y=%d\n",x,y);
}