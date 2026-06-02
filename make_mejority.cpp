#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a;
        cin >> a;

        int ones = 0;
        int zero_blocks = 0;

        // count ones
        for (char c : a) {
            if (c == '1') ones++;
        }

        // count zero blocks
        for (int i = 0; i < n; i++) {
            if (a[i] == '0') {
                zero_blocks++;
                while (i < n && a[i] == '0') i++; // skip whole block
                i--; // adjust index
            }
        }

        if (ones > zero_blocks)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}