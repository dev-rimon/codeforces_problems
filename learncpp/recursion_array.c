#include <stdio.h>

int max_in_array(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int max = max_in_array(arr, n - 1);
    if (arr[n - 1] > max)
    {
        return arr[n - 1];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
            return 0;
    }
    int max = max_in_array(arr, n);
    printf("%d", max);

    return 0;
}