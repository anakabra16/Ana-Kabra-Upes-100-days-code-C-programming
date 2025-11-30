#include<stdio.h>
int main(){
    int n;
    float i, numerator = 2 ,dinominator = 3,sum = 0;

    printf("enter terms: ");
    scanf("%d",&n);

    for (i = 1 ; i <= n ; i++){
        sum += numerator / dinominator;
        numerator += 2;
        dinominator += 4;
    }
    printf("the series of %d is: %f\n",n,sum);

}