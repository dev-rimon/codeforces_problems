#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    vector<pair<int, char>> colors(3);
    cin >> colors[0].first >> colors[1].first >> colors[2].first;
    colors[0].second = 'R';
    colors[1].second = 'G';
    colors[2].second = 'B';

    sort(colors.rbegin(), colors.rend());

    string res = "";
    // We use a 4-length cycle: C0, C1, C0, C2
    while (true) {
        if (colors[0].first > 0) { res += colors[0].second; colors[0].first--; } else break;
        if (colors[1].first > 0) { res += colors[1].second; colors[1].first--; } else break;
        if (colors[0].first > 0) { res += colors[0].second; colors[0].first--; } else break;
        if (colors[2].first > 0) { res += colors[2].second; colors[2].first--; } else break;
    }
    
    // Check if we can add a few trailing characters safely
    // Since we exited when a color hit 0, we check the last 3 for distance rules
    // but the 4-cycle is usually the maximum.
    
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}