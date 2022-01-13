#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    float c, d;
    cin >> c >> d;
    cout << sum(c, d) << endl;
    double e, f;
    cin >> e >> f;
    cout << sum(e, f) << endl;
}