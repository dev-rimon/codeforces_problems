#include <stdio.h>
void countdown(int n)
{
    if (n <= 0)
    {
       printf("rimon\n");
    }
    else
    {
        printf("%d", n);
        countdown(n - 1);
    }
}
int main()
{
    int s = 5;
    countdown(s);

    return 0;
}
