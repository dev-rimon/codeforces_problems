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
        vector<int> arr(n);
        int sum = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            if (sum % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            int first_elemnt = arr[0];
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == first_elemnt)
                {
                    found = true;
                }
            }
            if (found)
            {
                cout << "NO" << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                if (sum % 2 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
