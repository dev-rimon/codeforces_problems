#include <stdio.h>

int main() {
    int years;
    scanf("%d", &years);

    int value = 50; // starting value

    for (int i = 1; i <= years; i++) {
        value += 2; // add 2 each year
        printf("After year %d = %d\n", i, value);
    }

    return 0;
}
