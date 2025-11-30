#include<stdio.h>
int main(){
    int month;
    printf("enter the month (1-12): ");
    scanf("%d", &month);

    switch(month){
    case 1: printf("january with 31 days\n");break;
    case 2: printf("februrary with 28 days\n");break;
    case 3: printf("march with 31 days\n");break;
    case 4: printf("april with 30 days\n");break;
    case 5: printf("may with 31 days\n");break;
    case 6: printf("june with 30 days\n");break;
    case 7: printf("july with 31 days\n");break;
    case 8: printf("august with 31 days\n");break;
    case 9: printf("september with 30 days\n");break;
    case 10: printf("october with 31 days\n");break;
    case 11: printf("november with 30 days\n");break;
    case 12: printf("december with 31 days\n");break;

    return 0;
    }
} 