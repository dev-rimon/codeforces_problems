#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count0 = 0, count1 = 0;
    bool found = false;

    for (char c : s) {
        if (c == '0') {
            count0++;
            count1 = 0; // reset ones count
        } else if (c == '1') {
            count1++;
            count0 = 0; // reset zeros count
        }

        if (count0 >= 7 || count1 >= 7) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;

    return 0;
}
