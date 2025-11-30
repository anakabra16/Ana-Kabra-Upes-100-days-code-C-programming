#include<stdio.h>
int main(){
    int arr[100],even = 0,odd = 0,n,i;
    printf("enter total count: ");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i = 0 ; i < n ; i++) {
    scanf("%d", &arr[i]);

}
for (i = 0 ; i < n ; i++) {
    if (arr[i] % 2 == 0)
    even++;
    else
    odd++;

}
   printf("Total even numbers = %d\n", even);
    printf("Total odd numbers = %d\n", odd);
}