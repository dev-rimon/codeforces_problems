#include <iostream>
using namespace std;
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     else
//         return gcd(b, a % b);
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n <= 3)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n / 2 << endl;
        }
    }

    return 0;
}