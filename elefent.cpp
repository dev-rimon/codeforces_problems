#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int steps = (x + 4) / 5; // ceil division for positive x
    cout << steps << endl;

    return 0;
}
