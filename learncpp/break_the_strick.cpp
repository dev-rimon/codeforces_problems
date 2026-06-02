#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // case 1: n even
        if (n % 2 == 0)
        {
            cout << "YES\n";
        }
        // case 2: n odd but k == 1
        else if (k == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}