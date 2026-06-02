#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (a[j] == 0)
            {
                count++;
            }
        }
    }
    cout<<count/2<<endl;

    return 0;
}