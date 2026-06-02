#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int neg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) neg++;
        }

        int pos = n - neg;

        if (neg <= pos) {
            if (neg % 2 == 0) {
                cout << 0 << "\n";
            } else {
                cout << 1 << "\n";
            }
        } else {
            int k = (neg - pos + 1) / 2;
            neg -= k;
            if (neg % 2 == 0) {
                cout << k << "\n";
            } else {
                cout << k + 1 << "\n";
            }
        }
    }

    return 0;
}