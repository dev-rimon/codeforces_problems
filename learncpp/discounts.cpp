#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    long long total = 0;
    for(auto x : a)
        total += x;

    int m;
    cin >> m;

    while(m--)
    {
        int k;
        cin >> k;

        cout << total - a[k-1] << endl;
    }

    return 0;
}