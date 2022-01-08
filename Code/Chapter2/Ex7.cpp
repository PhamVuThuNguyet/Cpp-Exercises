#include <bits/stdc++.h>
using namespace std;

double rectArea(double w, double h)
{
    return w * h;
}

double rectPeri(double w, double h)
{
    return (w + h) * 2;
}

int main()
{
    double w, h;
    cin >> w >> h;
    cout << rectArea(w, h) << " " << rectPeri(w, h) << endl;
}