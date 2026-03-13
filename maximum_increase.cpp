#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll maxlen = 1;
    ll currentlen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            currentlen++;
        }
        else
            currentlen = 1;
        maxlen = max(maxlen, currentlen);
    }
    cout << currentlen << endl;

    return 0;
}
