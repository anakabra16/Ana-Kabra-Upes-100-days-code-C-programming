#include<stdio.h>
int main(){
   char na;
   printf("enter alphabet: ");
   scanf("%c", &na);
   
   if (na>='a' && na<='z')
   printf("lowercase\n");
   else if (na>='A' && na<='Z')
    printf("uppercase\n");
    else if (na>='0' && na<='9')
    printf("digit\n");
    else 
    printf("special character\n");
}