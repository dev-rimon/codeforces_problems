#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    while (i < n)
    {
        if (i == n - 1)
        {
            cout << "Yeee! Argentina" << endl;
            return 0;
        }

        if (a[i] % x == 0)
        {
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << "Messi missed the penalty!" << endl;

    return 0;
}