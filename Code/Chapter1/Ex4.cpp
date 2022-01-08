#include <bits/stdc++.h>
using namespace std;

int sumNFirstNum(int n)
{
    int sum_ = 0;
    for (int i = 1; i < n; i++)
    {
        sum_ += i;
    }
    return sum_;
}

int main()
{
    int n;
    cin >> n;

    cout<<sumNFirstNum(n)<<endl;
}