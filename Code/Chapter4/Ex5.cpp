#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    double w1, w2, h1, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    string s = ((w1 * h1) == (w2 * h2)) ? "Same" : (((w1 * h1) > (w2 * h2)) ? "RECT 1" : "RECT 2");
    cout << s << endl;
}