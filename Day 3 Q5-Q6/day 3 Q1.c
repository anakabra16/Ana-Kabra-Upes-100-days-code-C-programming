#include<stdio.h>
int main(){
    float celcius,fehrenite;
    printf("enter tempertaure in celcius: ");
    scanf("%f",&celcius);

      fehrenite = (celcius * 9/5) + 32;

      printf("%f celcius= %f fehrenite", celcius,fehrenite);
}