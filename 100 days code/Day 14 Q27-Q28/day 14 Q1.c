#include<stdio.h>
int main(){
    int n,odd,i, sum=0 ;
    printf("enter n: ");
    scanf("%d", &n);

   
    for (i=1 ; i<=n ; i++){
    odd = 2* i - 1;
    printf("%d", odd );
       sum += odd;
    }
    
   
    printf("\nThe sum of first %d odd numbers is: %d\n", n, sum);
}