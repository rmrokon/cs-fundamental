#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >>q;
    vector<int>v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l,r, sum = 0;
        cin >> l >> r;

        for(int j = l - 1; j < r; j++)
        {
            sum += v[j];
        }
        cout << sum << endl;
    }

    return 0;
}