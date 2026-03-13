#include <stdio.h>

// Function to calculate sum
int sumArray(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, n);

    printf("Sum of array = %d\n", result);

    return 0;
}