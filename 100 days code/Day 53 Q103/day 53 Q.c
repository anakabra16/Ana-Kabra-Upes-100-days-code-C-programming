#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];
    for (int i = 0; i < n; i++) {
        
        if (leftSum == totalSum - leftSum - arr[i])
            return i;
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int pivot = findPivotIndex(arr, n);
    printf("%d\n", pivot);
    return 0;
}