#include <bits/stdc++.h>
using namespace std;

void area_of_circle(float *value, float *result)
{
    *result = 3.14 * (*value) * (*value);
}

int main()
{
    float radius, area;
    cin >> radius;
    area_of_circle(&radius, &area);
    cout << area << endl;
}