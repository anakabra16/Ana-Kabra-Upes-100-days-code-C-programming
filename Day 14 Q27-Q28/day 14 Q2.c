#include <stdio.h>

int main() {
    int n, i;
    int prod = 1;
    int even = 0;  // To check if there is at least one even number

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d:", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {  // check if even
            printf(" %d", i);
            prod *= i;
            even = 1;
        }
    }

    if (even)
        printf("\nProduct of even numbers from 1 to %d = %d\n", n, prod);
    else
        printf("\nNo even numbers between 1 and %d\n", n);

    return 0;
}