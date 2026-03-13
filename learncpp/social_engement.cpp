#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long s, k, m;
    cin >> s >> k >> m;

    if (m < k) {
        // No flips occur. Sand just falls from the initial state.
        cout << max(0LL, s - m) << endl;
    } else {
        // At least one flip occurs.
        // After any flip, the top bulb has min(s, k) sand.
        long long sand_in_top = min(s, k);
        long long time_since_last_flip = m % k;
        
        long long remaining = sand_in_top - time_since_last_flip;
        cout << max(0LL, remaining) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}