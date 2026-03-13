#include <stdio.h>
int main()
{
    int days, month;
    scanf("%d", &month);
    scanf("%d", &days);

    if (month == 2 && days == 18)
    {
        printf("Special\n");
    }
    else if (month < 2)
    {
        printf("Before\n");
    }
    else if (month > 2)
    {
        printf("After\n");
    }
    else if ( month ==2 && days<18)
    {
      printf("Before\n");
    }
    else if ( month ==2 && days>18)
    {
      printf("After\n");
    }
    

    return 0;
}