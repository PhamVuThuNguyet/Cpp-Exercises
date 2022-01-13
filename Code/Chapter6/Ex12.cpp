#include <bits/stdc++.h>
using namespace std;

void factorial(int *n, int *result)
{
    for (int i = 1; i <= (*n); i++)
    {
        *result *= i;
    }
}

int main()
{
    int n, fact = 1;
    cin >> n;
    factorial(&n, &fact);
    cout << fact << endl;
}