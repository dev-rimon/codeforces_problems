#include <stdio.h>
int main()
{
   char str[200];
int i = 0, words = 0;
gets(str);
while (str[i] != '\0') {
 if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
 words++;
 i++;
}
printf("Words = %d\n", words);
    puts(str);
}
