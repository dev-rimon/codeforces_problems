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

        long long int w, h, n;
        cin >> w >> h >> n;
        long long int count = 1;

        while (w % 2 == 0)
        {
            w = w / 2;
            count *= 2;
        }

        while (h % 2 == 0)
        {
            h = h / 2;
            count *= 2;
        }

        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}