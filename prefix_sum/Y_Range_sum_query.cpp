#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long int>v(n);
    vector<long long int>pre(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
            pre[i] = pre[i - 1] + v[i];
    }

    while(q--)
    {
        long long l,r, sum;
        cin >> l >> r;
        l--;
        r--;
        if(l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}