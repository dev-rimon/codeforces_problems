#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    float cg;
};

int main()
{
    struct student *s;
    int n = 2;

    s = (struct student *)malloc(n * sizeof(struct student));


    for (int i = 0; i < n; i++)
    {
        scanf("%d %f", &s[i].id, &s[i].cg);
    }

    printf("\nDisplaying Student Data:\n");

    for (int i = 0; i < n; i++)
    {
        printf("id = %d \ncg = %.2f\n", s[i].id, s[i].cg);
    }

    free(s);

    return 0;
}