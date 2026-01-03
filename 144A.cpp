#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int max_index = max_element(a.begin(), a.end()) - a.begin();
    int min_index = min_element(a.begin(), a.end()) - a.begin();

    int swaps = max_index; // swaps to move max to front

    // If max is before min, after moving max, min index shifts right by 1
    if (max_index > min_index)
        min_index++;

    // swaps to move min to end
    swaps += (n - 1 - min_index);
    if (max_index > min_index)
        swaps -= 1;

    cout << swaps << endl;
    return 0;
}
