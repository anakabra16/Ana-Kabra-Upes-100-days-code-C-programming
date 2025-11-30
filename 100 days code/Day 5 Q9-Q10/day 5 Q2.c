#include<stdio.h>
int main(){
    int hrs,min,sec,totalsec;
    printf("enter time in seconds: ");
    scanf("%d", &totalsec);

    hrs = totalsec/3600;
    min = (totalsec % 3600)/60;
    sec =  totalsec % 60;
    {
     printf("%dhrs %dmin %dsec\n", hrs,min,sec);
    }
    
}