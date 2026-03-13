#include <stdio.h>
int main()
{
    //fjkhafhga
    int n;
    scanf("%d", &n);
    int mul = 1;
    while (n > 0)
    {
    int digts  = n % 10;
        mul *= digts;

        n /= 10;
    }

    printf("%d\n", mul);

    return 0;
}