#include<stdio.h>
int main(){
    int arr[100],n,i;
    int positive = 0 , negative = 0 , zero = 0;

    printf("enter total elements: ");
    scanf("%d",&n);
    printf("enter %d elements:\n");
    for (i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);

    for(i = 0 ; i < n ; i++){
    if (arr[i] > 0)
    positive++;
    
        else if (arr[i] < 0)
        negative++;

        else
        zero++;
    }
     printf("\nPositive numbers: %d", positive);
    printf("\nNegative numbers: %d", negative);
    printf("\nZeroes: %d\n", zero);
    

}
