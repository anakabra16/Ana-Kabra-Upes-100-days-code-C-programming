#include<stdio.h>
#include<math.h>

int main(){
    int days;
    int fine;
    printf("enter days late:  ");
    scanf("%d", &days);

    if (days<0){
    printf("no fine\n ");
    }

    else if (days<=5){
    fine = 2 * days;
    printf("fine is:%d\n ",fine);
    }

    else if (days<=10){
    fine = 4 * days;
     printf("fine is:%d\n ",fine);
}

     else if (days<=30){
        fine = 6 * days;
         printf("fine is:%d\n ",fine);
     }
     else {
        printf("membership cancel/n");

}
}