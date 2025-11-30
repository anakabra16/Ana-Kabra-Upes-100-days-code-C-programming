#include<stdio.h>
int main(){
   char na;
   printf("enter alphabet: ");
   scanf("%c", &na);
   
   if ((na=='a')||(na=='e')||(na=='i')||(na=='o')||(na=='u')||(na=='A')||(na=='E')||(na=='I')||(na=='O')||(na=='I'))
   printf("vowel");
   else
   printf("consonants");
}