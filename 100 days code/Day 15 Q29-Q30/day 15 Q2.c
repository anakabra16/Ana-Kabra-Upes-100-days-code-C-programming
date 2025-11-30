#include<stdio.h>
int main(){
    int ab,reverse,ba;
    printf("enter number to reverse: ");
    scanf("%d", &ab);

    printf("\n before swapping :%d\n ", ab);

    reverse = 0;
    reverse = reverse * 10 + ab % 10;
    reverse = ab / 10;

    printf("\n after swapping:%d\n ", ba);

}