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
        long long int m1, m3, ans, remaing;
        long long int sum = 0;
        while (n > 2)
        {
            ans = n / 3;
            m1 = ans;
            sum += m1;

            remaing = n % 3;
            m3 = ans + remaing;
            n = m3;
        }
        cout << sum << endl;
    }

    return 0;
}