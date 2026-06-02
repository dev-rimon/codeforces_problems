#include <stdio.h>
#include <math.h>

#define k 100.0
#define A 0.5

int main()
{
    double x;
    int steps = 10;

    printf("x\tPE\tKE\tTotalE\tWork\n");

    for(int i = 0; i <= steps; i++)
    {
        x = -A + i * (2*A/steps);

        double PE = 0.5 * k * x * x;

        double KE = 0.5 * k * (A*A - x*x);

        double total = PE + KE;

        // Analytical work formula
        double work = 0.5 * k * (A*A - x*x);

        printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               x, PE, KE, total, work);
    }

    return 0;
}