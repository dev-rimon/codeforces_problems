#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // Base case: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case: F(n) = F(n-1) + F(n-2)
}

int main()
{

    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i)); // Print each term by calling the recursive function
    }
    printf("\n");
    return 0;
}