#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "(([{}]))";
    if(s.size() % 2 != 0) cout << "NO";
        queue<char>firstHalf;
        queue<char>secondHalf;
        for(int i = 0; i < s.size() / 2; i++)
        {
            firstHalf.push(s[i]);
        }
        for(int i = s.size() - 1; i >= s.size() / 2; i--)
        {
            secondHalf.push(s[i]);
        }
        bool flag = true;
        while(!firstHalf.empty())
        {
            char c1 = firstHalf.front();
            char c2 = secondHalf.front();
            cout << c1 << " " << c2 << endl;
            if(c1 == '(' && c2 != ')')
            {
                flag = false;
                break;
            }
            else if(c1 == '{' && c2 != '}')
            {
                flag = false;
                break;
            }
            else if(c1 == '[' && c2 != ']')
            {
                flag = false;
                break;
            }
            firstHalf.pop();
            secondHalf.pop();
        }
        if(flag)
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    return 0;
}