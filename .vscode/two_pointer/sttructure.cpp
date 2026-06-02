#include <iostream>
using namespace std;

struct student
{

    int id;
    char name[30];
    int age;
};

int main()
{

    struct student s1 = {1, "rimon", 22};

    s1.id = 4;

    char temp[30];
    scanf("%s", &temp);
    strcpy(s1.name, temp);
    printf("id is %d.   name is %s : age is %d", s1.id, s1.name, s1.age);

    return 0;
}