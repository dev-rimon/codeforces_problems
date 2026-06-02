#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s", s);
    char sub[] = "computerscience";
    int i, found = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; sub[j] != '\0'; j++)
        {
            if (s[i + j] != sub[j])
            {
                break;
            }
            if (sub[j] == '\0')
            {
                found = 1;
                break;
            }
        }
    }

    if (found)
        printf("Weak passsword");

    else

        printf("Strong password");

    return 0;
}