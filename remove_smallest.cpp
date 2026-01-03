#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the vector for consistent comparison
        sort(a.begin(), a.end());

        // Try to remove elements with difference <= 1
        for (int i = 0; i < (int)a.size() - 1; i++) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                // remove the smaller one
                if (a[i] < a[i + 1]) {
                    a.erase(a.begin() + i);
                } else {
                    a.erase(a.begin() + i + 1);
                }
                i--; // step back after erase
            }
        }

        if (a.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
