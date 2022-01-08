#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int sum_ = 0;
    int temp = n;
    while (n != 0)
    {
        sum_ += pow(n % 10, 3);
        n /= 10;
    }
    if (sum_ == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printArmstrong(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        if (checkArmstrong(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    printArmstrong(m, n);
}