#include<bits/stdc++.h>
using namespace std;

int main()
{
    char line[100001];
    while (cin.getline(line, 100001))
    {
        sort(line, line + strlen(line));
        int size = strlen(line);
        for (int i = 0; i < size; i++)
        {
            if(line[i] >= 'a' && line[i] <= 'z')
            {
                cout << line[i];
            }
        }
        cout << endl;
    }
    return 0;
}
        // for (size_t i = 0; i < strlen(line) - 1; i++)
        // {
        //     for (size_t j = i + 1; j < strlen(line); j++)
        //     {
        //         if(line[i] > line[j]){
        //             swap(line[i], line[j]);
        //         }
        //     }
            
        // }