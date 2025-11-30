
#include <stdio.h>

int main() {
    int i;
    printf("enter grades: ");
    scanf("%d", &i);
    
    if (i>=90 && i<=100)
    printf("grade A\n");
    
    else if  (i>=80 && i<90)
        printf("grade B\n");
        
        else if (i>=70 && i<80)
         printf("grade C\n");
         
          else if (i>=60 && i<70)
           printf("grade D\n");
           
           else 
           printf("grade F\n");
}