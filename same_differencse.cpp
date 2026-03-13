#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[n - 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}