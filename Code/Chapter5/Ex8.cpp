#include <bits/stdc++.h>
using namespace std;

int productOfDigits(int n)
{
    int product_ = 1;
    while (n != 0)
    {
        product_ *= n % 10;
        n /= 10;
    }
    return product_;
}

int main()
{
    int n;
    cin >> n;
    cout << productOfDigits(n) << endl;
}