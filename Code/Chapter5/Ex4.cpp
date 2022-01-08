#include <bits/stdc++.h>
using namespace std;

int calculate(int n)
{
    int sum_ = 0;
    for (int i = 1; i <= n; i++)
    {
        sum_ += pow(i, 2);
    }
    return sum_;
}

int main()
{
    int n;
    cin >> n;
    cout << calculate(n) << endl;
}