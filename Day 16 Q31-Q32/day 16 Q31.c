#include <stdio.h>

int main() {
    int num;
    int binary[32];  // array to store binary digits
    int i = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    // Handle case when number is 0
    if (num == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // store remainder (0 or 1)
        num = num / 2;        // divide number by 2
        i++;
    }

    printf("Binary equivalent: ");
    // print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}