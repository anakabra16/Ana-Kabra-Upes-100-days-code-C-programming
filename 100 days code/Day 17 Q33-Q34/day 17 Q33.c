#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
