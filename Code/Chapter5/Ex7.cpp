#include <bits/stdc++.h>
using namespace std;

int evenSum(int n)
{
    int sum_ = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum_ += i;
    }
    return sum_;
}

int main()
{
    int n;
    cin >> n;
    cout << evenSum(n) << endl;
}