#include <iostream>
#include<string>
using namespace std;

int main()
{
    
    
        int n;
        cin >> n;

        int temp = n; // store original number
        int count = -1;

        while (temp != 0)
        {
            temp /= 10;
            count++;
        }

        string s = to_string(n);
        int first_digit = s.front() - '0';
        int add = first_digit + 1;
        int result = add;

        for (int i = 0; i < count; i++)
        {
            result *= 10;
        }
        cout << result - n << endl;
    

    return 0;
}
