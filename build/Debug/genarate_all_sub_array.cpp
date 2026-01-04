#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i <= n - k; i++)
    {
        cout << "all subarray" << i + 1;
        for (int j = i; j < i + k; j++)
        {
            cout << v[j];
        }
        cout<<endl;
    }

    return 0;
}
