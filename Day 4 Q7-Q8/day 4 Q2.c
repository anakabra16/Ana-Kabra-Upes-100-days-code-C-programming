#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter  number: ");
    scanf("%d",&n);

for(i=1 ; i<=n ; i++)
{
sum= sum+i;
}

    printf("enter sum of n %d numbers:%d\n ",n,sum);

}