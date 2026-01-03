#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int result;
    int ans = 0;

    for (int i = 1; i <= w; i++)
    {
        ans += i * k;
    }

    result = ans - n;
    if (result < 0)
        result = 0; // if he has enough money, borrow 0

    cout << result << endl;

    return 0;
}
