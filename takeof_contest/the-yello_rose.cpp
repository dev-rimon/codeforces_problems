#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)  
        {
            int rem = x % arr[i];
            if (rem == 127)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}