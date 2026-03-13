#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t; // প্রথমে কয়টি টেস্ট কেস তা ইনপুট নিন
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        // যতক্ষণ n এর মান a এর সমান বা বড় থাকবে
        while (n >= a)
        {
            n = n - (a - b); // দৈর্ঘ্য কমানো হচ্ছে
        }

        cout << n << endl;
    }
}
