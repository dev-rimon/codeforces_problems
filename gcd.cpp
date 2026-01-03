#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(t);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < t; i++) { // start from 1 to avoid division by zero
        if (arr[i] % i != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
