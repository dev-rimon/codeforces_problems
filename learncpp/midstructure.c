#include <stdio.h>

struct Applicant
{
    int id;
    char name[50];
    char event[50];
    int cleared;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Applicant a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].id);
        scanf("%s", a[i].name);
        scanf("%s", a[i].event);
        scanf("%d", &a[i].cleared);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i].cleared == 1 && strcmp(a[i].event, "coding") == 0)
        {
            printf("ID: %d Name: %s Event: %s Status: Cleared\n",
                   a[i].id, a[i].name, a[i].event);
        }
    }
}