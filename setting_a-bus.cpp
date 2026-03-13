#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> occ(n + 2, 0);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        occ[a[0]] = 1;
        bool ok = true;

        for (int i = 1; i < n; i++)
        {
            int seat = a[i];

            if (occ[seat - 1] == 0 && occ[seat + 1] == 0)
            {
                ok = false;
                break;
            }

            occ[seat] = 1;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}