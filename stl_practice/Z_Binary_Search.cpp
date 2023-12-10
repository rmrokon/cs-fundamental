#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a < b;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int start_index = 0, end_index = v.size() - 1, flag = 0;

        while (start_index <= end_index)
        {
            int mid = (start_index + end_index) / 2;
            if (v[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > x)
            {
                // start_index++;
                end_index = mid - 1;
            }
            else
            {
                start_index = mid + 1;
            }
        }
        if(flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}