#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a =10, b=20;
    printf("before swap  a= %d \n b= %d",a ,b);
    swap(&a, &b);
    printf("After swap a = %d\n b = %d\n",a,b);

    return 0;
}