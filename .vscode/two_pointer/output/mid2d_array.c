#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][3];

    // Input
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }

    // Print score table
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
    }

    // Check qualification
    for (int i = 0; i < n; i++)
    {
        int ps = a[i][0];
        int logic = a[i][1];
        int debug = a[i][2];

        if (ps >= 7 && (logic >= 6 || debug >= 6))
        {
            printf("Qualified: %d\n", i);
        }
    }

    return 0;
}