#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        int ans = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {

                int x = min(A[i], A[j]);
                int y = max(A[i], A[j]);

                int discount = min(y / 2, 100);
                int cost = x + (y - discount);

                if (cost <= K) {
                    ans = max(ans, B[i] + B[j]);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}