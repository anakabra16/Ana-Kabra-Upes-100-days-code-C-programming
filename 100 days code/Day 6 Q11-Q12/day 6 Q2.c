#include<stdio.h>
int main(){
    int num;
    int positive=0,negative=0,zeros=0;
     char choices;

     do{
        printf("enter number: ");
        scanf("%d",&num);

        if (num > 0)
        printf("postive number");

        else if (num < 0)
        printf("negative number");

        else printf("zeros");

        printf("do you want to print another number?(y/n): ");
        scanf("%c", &choices);
 }
 while  ("choice=y || choice=Y");

 printf("\ncount the positive numbers:%d",positive);
 printf("\ncount the negative numbers;%d",negative);
 printf("\ncount the zeros:%d\n",zeros);

 return 0;
}