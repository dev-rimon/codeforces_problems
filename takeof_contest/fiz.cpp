#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long x;
    int count_zero = 0;
    bool has_one = false;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            count_zero++;
        if (x == 1)
            has_one = true;
    }

    if (count_zero > 0)
    {
        cout << "YES\n";
    }
    else if (has_one)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}