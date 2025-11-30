#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter three sides");
    scanf("%f %f %f", &a,&b,&c);

 if ((a+b>c)&& (b+c>a)&& (a+c>b)){
printf("triangle is valid");
}
if((a==b)&& (b==c)){
    printf(" its equilateral");
}else if ((a==b)|| (b==c)|| (c==a)){
    printf(" its isosceles");
}else { printf("its scalene");
}
if ((a*a == b*b + c*c) || 
            (b*b == a*a + c*c) || 
            (c*c == a*a + b*b)) {
            printf("It is also a Right-angled triangle\n");
            }
        }