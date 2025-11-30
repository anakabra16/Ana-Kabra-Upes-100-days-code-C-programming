#include<stdio.h>
int main(){
    int r, pie= 3;
    int area,circumference;
    printf("enter radius value: ");
    scanf("%d", &r);


    area= pie*r*r;
    circumference= 2*pie*r;

    printf("the area of %d and  is: %d\n",r,area);
    printf("the circumference of  and %d is: %d\n",r,circumference);
}