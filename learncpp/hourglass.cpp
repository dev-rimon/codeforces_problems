#include <iostream>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 int t;
    cin >> t;
    while (t--)
    {
       long long   s, k, m;
        cin >> s >> k >> m;

        long long lastflip = (m / k) * k;
        long long colasped = m - lastflip;
        long long remain = s - colasped;
        cout << max(0LL, remain) << '\n';
    }

    return 0;
}