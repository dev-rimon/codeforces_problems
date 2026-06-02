#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        string base = "23";
        base.append(n - 2, '3');
        cout << base << endl;
    }

    return 0;
}