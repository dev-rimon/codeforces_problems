#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int count = 0;
        vector<int> a(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];

            if (a[i] >= 50)
            {
                count++;
            }
        }

        if (count >= 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}