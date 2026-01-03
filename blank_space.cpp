#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int maxzeros = 0;
        int current = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                current++;
                maxzeros = max(maxzeros, current);
            }
            else
            {

                current = 0;
            }
        }
        cout << maxzeros << endl;
    }

    return 0;
}