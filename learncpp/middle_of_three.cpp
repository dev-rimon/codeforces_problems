#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    // hello

    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << arr[1] << endl;

    return 0;
}
