#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long // Using long long for 10^9 values

void solve() {
    int n, c, k;
    if (!(cin >> n >> c >> k)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 1. Sort monsters to kill the weakest ones first
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
            // 2. Use as many flip-flops as possible to increase this monster's value
            // but keep it <= current combat power c
            int can_use = min(k, c - a[i]);
            
            c += (a[i] + can_use);
            k -= can_use;
        } else {
            // 3. If even the weakest remaining monster is too strong, we are done
            break;
        }
    }

    cout << c << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}