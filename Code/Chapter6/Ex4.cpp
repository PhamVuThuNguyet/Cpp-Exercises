#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    int sum_ = 0;
    while (n != 0)
    {
        sum_ += n % 10;
        n /= 10;
    }
    return sum_;
}

int findNumWithMaxDigitSum(int n, int m)
{
    int max_sum = 0;
    int max_ = n;

    for (int i = n; i <= m; i++)
    {
        int temp = sumOfDigit(i);
        if (max_sum <= temp)
        {
            max_sum = temp;
            max_ = (max_ <= i) ? i : max_;
        }
    }

    return max_;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << "F";
        return 0;
    }
    cout << findNumWithMaxDigitSum(n, m) << endl;
}