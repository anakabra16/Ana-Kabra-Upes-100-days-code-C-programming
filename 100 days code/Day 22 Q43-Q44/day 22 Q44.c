#include<stdio.h>
int main(){
    int n;
    float i, numerator = 1 ,dinominator = 2,sum = 0;

    printf("enter terms: ");
    scanf("%d",&n);

    for (i = 0 ; i <= n ; i++){
        sum += numerator / dinominator;
        numerator += 2;
        dinominator += 2;
    }
    printf("the series is: %f\n",n,sum);

}