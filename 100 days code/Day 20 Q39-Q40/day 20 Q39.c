#include <stdio.h>

int main() {
    int num, digit, product = 1, hasOdd = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int originalNum = num;

    // Handle negative numbers
    if (num < 0) num = -num;

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 == 1) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found in %d.\n", originalNum);

    return 0;
}
