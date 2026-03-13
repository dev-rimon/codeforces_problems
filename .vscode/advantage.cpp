#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> arr(n);

    int max_val = INT_MIN;
    int max_idx = -1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }

    // Find the second largest element
    int second_max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (i != max_idx) {
            if (arr[i] > second_max) {
                second_max = arr[i];
            }
        }
    }

    // If all elements were the same, second_max remains max_val
    if (n > 1 && second_max == INT_MIN) {
        second_max = max_val;
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        if (i == max_idx) {
            // Replace largest with (largest - second largest)
            ans[i] = max_val - second_max;
        } else {
            // Replace others with (element - largest)
            ans[i] = arr[i] - max_val;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}