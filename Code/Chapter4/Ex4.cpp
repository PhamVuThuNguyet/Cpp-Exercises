#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (a1 == 0 || a2 == 0 || a3 == 0)
    {
        cout << "NOT VALID" << endl;
        return 0;
    }
    if (a1 + a2 + a3 == 180)
    {
        cout << "VALID" << endl;
    }
    else
    {
        cout << "NOT VALID" << endl;
    }
}