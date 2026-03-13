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
        int n, a, b;

        cin >> n >> a >> b;
        if (n % 2 == 0)
        {
            int value = n / 2;
            if (value * b > n * a)
            {
                cout << n * a << endl;
            }
            else
            {
                cout << value * b << endl;
            }
        }
        else
        {
            int element = n - 1;
            int element2 = element / 2;
            if (element2 * b + a < n * a)
            {
                cout << element2 * b + a << endl;
            }
            else
            {
                cout << n * a << endl;
            }
        }
    }

    return 0;
}