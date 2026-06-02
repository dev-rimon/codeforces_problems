#include <stdio.h>

int  recurse(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
   
    for (int i = 0; i < n; i++)
    { int count = 0;
        if (arr[i] == 1)
        {
            count++;
        }
    }
   recurse(arr, n - 1);
}

int main()
{
    int arr[]= {1,0,1,0,1,0};
    int size =6;
    int ans = recurse(arr,size);
    printf("%d",ans);

    return 0;
}