#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;
    //   int arr[100];
    for (int i = 1; i < n; i += 2)
    {
        a.push_back(i);
        // cout << i << endl;
    }
    for (int i = 2; i < n; i+=2)
    {
       b.push_back(i);
       
       
       
    }
    a.insert(a.end(), b.begin(), b.end());
    if (k > a.size())
    {
        k = a.size();
    }
    if (k >= 1 && k <= a.size())
    {
        cout << a[k - 1] << endl;
    }

    return 0;
}