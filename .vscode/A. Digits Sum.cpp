#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = 0;
        ans = (n + 1) / 10;
        cout << ans << endl;
    }

    return 0;
}