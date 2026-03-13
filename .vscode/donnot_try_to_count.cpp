#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    for (int i = 0; i <= 5; i++) {
        // Check if s is currently a substring of x
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        // Double the string
        x += x;
    }

    // If not found after 6 iterations (plenty for n*m <= 25)
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}