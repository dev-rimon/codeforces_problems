#include <stdio.h>
#include <limits.h>

int main() {
    int n, num;
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    if (n < 2) {
        printf("You need at least two numbers.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > largest) {
            // The old king becomes the prince
            second_largest = largest;
            largest = num;
        } 
        else if (num > second_largest && num != largest) {
            // New number isn't the biggest, but beats the runner-up
            second_largest = num;
        }
    }

  
        printf("Largest: %d\n", largest);
        printf("Second Largest: %d\n", second_largest);
  

    return 0;
}