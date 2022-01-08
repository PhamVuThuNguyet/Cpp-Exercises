#include <bits/stdc++.h>
using namespace std;

void compute(int ds)
{
    int y, m, d;
    y = ds / 365;
    m = ((ds - (y * 365)) / 30) > 0 ? ((ds - (y * 365)) / 30) : 0;
    d = (ds - (y * 365) - (m * 30)) > 0 ? (ds - (y * 365) - (m * 30)) : 0;
    cout << y << " year " << m << " months " << d << " days " << endl;
}

int main()
{
    int days;
    cin >> days;
    compute(days);
}