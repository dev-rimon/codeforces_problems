#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<int> v(3);

    int first, third;
    int distence = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    first = abs(v[1] - v[0]);

    third = abs(v[1] - v[2]);

    distence = first + third;

    cout << distence << endl;

    return 0;
}