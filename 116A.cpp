// 
#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int current = 0;
    int maxcap = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current -= a;
        current += b;
        maxcap = max(maxcap, current);
    }

    cout << maxcap << "\n";
    return 0;
}
