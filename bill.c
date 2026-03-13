#include <stdio.h>

int main() {
    int unit;
    float bill = 0;

    printf("Enter units: ");
    scanf("%d", &unit);

    if (unit > 200) {
        bill += (unit - 200) * 10;
        unit = 200;
    }

    if (unit > 100) {
        bill += (unit - 100) * 7;
        unit = 100;
    }

    bill += unit * 5;

    printf("Bill = %.2f\n", bill);

    return 0;
}
