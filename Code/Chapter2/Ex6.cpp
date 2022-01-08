#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265358979323846

double circleArea(double r)
{
    return r * r * PI;
}

double circlePeri(double r)
{
    return 2 * r * PI;
}

int main()
{
    double r;
    cin >> r;
    cout << circleArea(r) << " " << circlePeri(r) << endl;
}