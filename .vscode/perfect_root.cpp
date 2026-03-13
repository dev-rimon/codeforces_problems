#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 1; i < n; i++)
    {
        arr.push_back(i * i);
        cout << arr[i] << endl;
    }

    return 0;
}
