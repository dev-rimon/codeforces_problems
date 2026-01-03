#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;  // একবারেই স্ট্রিং ইনপুট নিন

        unordered_map<char, int> freq;

        // ফ্রিকোয়েন্সি কাউন্ট
        for (auto c : s)
        {
            freq[c]++;
        }

        int count = 0;

        // unique → +2, repeated → +1
        for (auto &p : freq)
        {
            if (p.second == 1)
            {
                count += 2;   // unique
            }
            else
            {
                count += 1;   // repeated
            }
        }

        cout << count << endl;
    }

    return 0;
}
