 #include<bits/stdc++.h>
 using namespace std;

 class Frequency
 {
    public:
        char value;
        int count;
 };

 bool cmp(Frequency a, Frequency b)
 {
    if(a.count == b.count)
    {
        return b.value > a.value;
    }
    else
    {
        return b.count > a.count;
    }
 }

 int main()
 {
    string s;
    cin >> s;
    Frequency f[26];
    for (char i = 'a'; i <= 'z'; i++)
    {
        f[i - 'a'].value = char(i);
        f[i - 'a'].count = 0;
    }
    for(char c:s)
    {
        f[c - 'a'].count++;
    }

    sort(f, f+26, cmp);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < f[i].count; j++)
        {
            cout << f[i].value;
        }
    } 
    return 0;
 }