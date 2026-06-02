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
        int x, sum;
        for (int k = 2; k <= 30; k++)
        {
            sum = (1 << k) - 1;
            if (n % sum == 0)
            {
                cout << n / sum << endl;
                break;
            }
        }
    }

    return 0;
}