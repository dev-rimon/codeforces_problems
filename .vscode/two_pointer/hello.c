#include <stdio.h>

int main()
{

    int a;
    scanf("%d", &a);
    if (a<5)
    {
        printf("0\n");
    }

    else if (a>=5 && a<15 )
    {
      printf("1\n");
    }
    
    else if (a >= 15 && a < 30)
    {

        printf("2\n");
    }
    else if (a >= 30)
    {
        printf("3\n");
    }

    return 0;
}