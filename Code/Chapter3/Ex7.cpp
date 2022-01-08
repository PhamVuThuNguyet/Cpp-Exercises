#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int p = x * y;
    int s = x + y;
    cout << pow(s, 2) + p * s * x * (p + y) << endl;
}