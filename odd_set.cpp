#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n * 2);
        int even_count = 0;
        int odd_count = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        if (even_count == odd_count)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }

    return 0;
}