#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("enter number: ");
    scanf("%d",&num);\

    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10,digits);

    swapped = last*pow(10,digits) + (num % (int)pow(10,digits) / 10) * 10 + first;

    printf("number after swapping first and last digit:%d\n",swapped);
    }