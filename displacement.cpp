#include <iostream>
#include <set>
using namespace std;

int main() {
    string input;
    getline(cin, input); // পুরো লাইন ইনপুট নেওয়া

    set<char> uniqueChars; // unique চর সংরক্ষণ করার জন্য

    for (char ch : input) {
        // কেবল অক্ষর হলে সেটে যোগ করো
        if (isalpha(ch)) {
            uniqueChars.insert(ch);
        }
    }

    cout << uniqueChars.size() << endl; // unique সংখ্যা প্রিন্ট
    return 0;
}
