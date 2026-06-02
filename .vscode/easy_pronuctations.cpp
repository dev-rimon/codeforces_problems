    #include <iostream>
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
            cin >> s;
            int count = 0;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                {
                    count++;
                    if (count >= 4)
                    {
                        cout << "Yes" << endl;
                        found = true;
                        break;
                    }
                }
                else{
                    count=0;
                }

                
            
            }
            if (!found)
                {
                    cout << "No" << endl;
                }
        }

    }
    