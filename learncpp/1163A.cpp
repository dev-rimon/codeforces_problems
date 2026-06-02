#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // if no cat left
    if (m == 0)
    {
        cout << 1;
    }

    // if all cats left
    else if (m == n)
    {
        cout << 0;
    }

    else
    {
        // remaining cats
        int remain = n - m;

        // maximum groups
        cout << min(remain, m);
    }

    return 0;
}