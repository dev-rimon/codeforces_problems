#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // find pivot
    int piv = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            piv = i;
            break;
        }

    } // find the 2 ed largest element
    for (int i = n - 1; i > piv; i--)
    {
        if (v[i] > v[piv])
        {
            swap(v[i], v[piv]);
            break;
        }
    }
    // reverse the suffix
    reverse(v.begin() + piv + 1, v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}