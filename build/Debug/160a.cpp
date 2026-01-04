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
    sort(v.begin(), v.end(), greater<int>());

    int toatal_sum = 0;
    for (int x : v)
    {
        toatal_sum += x;
    }

    int current_sum = 0;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += v[i];
        count++;
        if (current_sum > toatal_sum / 2)
        {
            break;
        }
    }
    cout<<count<<endl;

    return 0;
}