#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.rbegin(), a.rend()); // descending

    int taken = 0;
    int taken_sum = 0;
    for (int i = 0; i < n; ++i) {
        taken_sum += a[i];
        ++taken;
        if (taken_sum > total - taken_sum) {
            cout << taken << '\n';
            return 0;
        }
    }

    cout << taken << '\n'; // fallback (shouldn't be reached for valid input)
    return 0;
}
