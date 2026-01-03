#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 2, 3, 4, 4, 5};
    vector<int>::iterator ip;
    sort(a.begin(), a.end());
    ip = unique(a.begin(), a.end());
     a.resize(distance(a.begin(), ip));
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}