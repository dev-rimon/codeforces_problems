#include <stdio.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int i = 0;
    int words = 0;
    while (s[i] != '\0')
    {
        if ((i == 0 || s[i - 1] == ' ') && (s[i] == ' '))
        {
            words++;
            i++;
        }
    }

    printf("%d", words);
}