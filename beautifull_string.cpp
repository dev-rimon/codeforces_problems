#include<iostream>
using namespace std;

// Function to count palindromic subarrays in vector a
int countPalindromes(const vector<int> &a) {
    int n = a.size(), cnt = 0;
    for (int i = 0; i < n; i++) {
        // Odd length palindromes
        int l = i, r = i;
        while (l >= 0 && r < n && a[l] == a[r]) {
            cnt++;
            l--, r++;
        }
        // Even length palindromes
        l = i, r = i + 1;
        while (l >= 0 && r < n && a[l] == a[r]) {
            cnt++;
            l--, r++;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Base count
        int base = countPalindromes(a);

        // Try to find small sequence to achieve exactly k palindromes
        if (base == k) {
            cout << 0 << "\n";
            continue;
        }

        bool found = false;

        for (int m = 1; m <= 3 && !found; m++) { // Try appending 1–3 elements
            vector<int> x(m);
            // Try small numbers (1–5)
            for (int i1 = 1; i1 <= 5 && !found; i1++) {
                for (int i2 = 1; i2 <= 5 && !found; i2++) {
                    for (int i3 = 1; i3 <= 5 && !found; i3++) {
                        x = {i1};
                        if (m >= 2) x.push_back(i2);
                        if (m >= 3) x.push_back(i3);
                        vector<int> tmp = a;
                        tmp.insert(tmp.end(), x.begin(), x.end());
                        if (countPalindromes(tmp) == k) {
                            cout << m << "\n";
                            for (int i = 0; i < m; i++)
                                cout << x[i] << (i + 1 == m ? "\n" : " ");
                            found = true;
                        }
                    }
                }
            }
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}
