#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    float SI,CI;
    printf("enter p: ");
    scanf("%f",&p);

    printf("enter r: ");
     scanf("%f",&r);

     printf("enter t: ");
      scanf("%f",&t);
     


    SI= (p*r*t)/100;
    CI= p*pow((1 + r/100),t)-p;

    printf("the SI is: %.2f\n",SI);
    printf("the CI is: %.2f\n",CI);
}