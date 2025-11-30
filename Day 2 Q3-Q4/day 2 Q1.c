#include<stdio.h>
int main(){
    int x,y;
    int area,perimeter;
    printf("enter length value: ");
    scanf("%d", &x);

    printf("enter breath value: ");
    scanf("%d",&y);

    area= x*y;
    perimeter= 2*(x+y);

    printf("the area of %d and %d is: %d\n",x,y,area);
    printf("the perimeter of %d and %d is: %d\n",x,y,perimeter);
    }