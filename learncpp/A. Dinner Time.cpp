#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n % p == 0)
        {
            if ((n / p) * q != m)
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}