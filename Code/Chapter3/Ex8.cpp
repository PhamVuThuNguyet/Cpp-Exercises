#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846

int main()
{
    double degree;
    cin >> degree;
    double radian = degree * (PI / 180);
    cout << sin(radian) << " " << cos(radian) << " " << tan(radian) << " " << cos(radian) / sin(radian) << endl;
}