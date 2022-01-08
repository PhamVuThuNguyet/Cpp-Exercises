#include <bits/stdc++.h>
using namespace std;

int findMax3Num(int a, int b, int c)
{
    int max_ = a < b ? b : (a < c ? c : a);
    return max_;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << findMax3Num(a, b, c) << endl;
}