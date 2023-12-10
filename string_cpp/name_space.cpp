#include<bits/stdc++.h>
using namespace std;

namespace Rokon
{
    int age = 29;
    void hello()
    {
        cout << "Rokon" << age << endl;
    }
}

namespace Reza
{
    int age2 = 39;
    void hello()
    {
        cout << "Reza" << age2 << endl;
    }
}

using namespace Rokon;
using namespace Reza;

int main()
{
    cout << age << endl << age2 << endl;
    return 0;
}