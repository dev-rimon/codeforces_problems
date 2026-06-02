#include <stdio.h>

struct student
{
    char first_name[100];
    char last_name[100];
    float ssc;
    float hsc;
    char phone_no[100];
};

int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)

    {

        scanf("%s %s %f %f %s", s[i].first_name, s[i].last_name, &s[i].ssc, &s[i].hsc, s[i].phone_no);
        sum = s[i].ssc + s[i].hsc;

        if (sum >= 9.70 && (s[i].ssc >= 4.75 && s[i].hsc >= 4.75))
        {
            printf(" %s %s\n", s[i].first_name, s[i].last_name);
        }
    }
}