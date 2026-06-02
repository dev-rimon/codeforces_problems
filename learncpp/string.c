#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (isupper(str[i]))
        {
            str[i] = str[i] + 32;
        }
        else
            str[i] = str[i] - 32;
        i++;
    }

  printf("%s",str);

    return 0;
}