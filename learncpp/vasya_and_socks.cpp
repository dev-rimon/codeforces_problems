#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int days = 0;

    while (n > 0) {
        days++;      // one day passes
        n--;         // Vasya uses one pair

        if (days % m == 0) {
            n++;     // mom buys one pair
        }
    }

    cout << days << endl;
    return 0;
}
