#include<stdio.h>
int main(){
     int x,y,l;
     printf("enter first number: ");
     scanf("%d",&x);

     printf("enter second number: ");
     scanf("%d",&y);

     printf("\nbeforeswapping x=%d && y=%d\n", x,y);

     l=x;
     x=y;
     y=l;

     printf("\n after swapping x=%d && y=%d\n",x,y);
}