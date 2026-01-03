#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ops = 0;
        bool possible = true;

        // Start from the second last element and go backward
        for (int i = n - 2; i >= 0; i--) {
            while (a[i] >= a[i + 1] && a[i] > 0) {
                a[i] /= 2;   // divide by 2
                ops++;
            }
            if (a[i] >= a[i + 1]) {
                possible = false;
                break;
            }
        }

        if (possible) cout << ops << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}
