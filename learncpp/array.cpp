#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        vector<pair<long long, int>> events;
        int current_active = 0;
        
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                // Inequality: 2k > a[i] + a[j]
                // Becomes active AFTER the midpoint
                events.push_back({a[i] + a[j], 1});
            } else if (a[j] < a[i]) {
                // Inequality: 2k < a[i] + a[j]
                // Active from -infinity UNTIL the midpoint
                current_active++;
                events.push_back({a[i] + a[j], -1});
            }
        }

        // Sort events by the sum (midpoint * 2)
        sort(events.begin(), events.end());

        int max_j = current_active;
        for (auto& event : events) {
            // If multiple midpoints are the same, we must handle 
            // the logic carefully. 2k must be STRICTLY less or greater.
            // When 2k = sum, it's not strictly closer.
            current_active += event.second;
            max_j = max(max_j, current_active);
        }
        cout << max_j << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}