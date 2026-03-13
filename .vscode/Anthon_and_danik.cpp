// Write a program thath prints somethings

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    int d_count = 0;
    int acount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 'A')
        {
            acount++;
        }
        if (arr[i] == 'D')
        {
            d_count++;
        }
    }
    if (acount > d_count)
    {
        cout << "Anton" << endl;
    }
    else if (d_count > acount)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}