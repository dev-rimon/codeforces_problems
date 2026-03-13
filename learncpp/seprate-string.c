#include <stdio.h>

int main() {
    char s[3];   // 2 digits + '\0'
    scanf("%s", s);

    printf("%c %c\n", s[0], s[1]);
    return 0;
}
