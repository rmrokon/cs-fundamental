#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num_of_test_case;
    string s,x;
    cin >> num_of_test_case;
    for (int i = 0; i < num_of_test_case; i++)
    {
        cin >> s >> x;
        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << endl;
        
    }

    return 0;
}