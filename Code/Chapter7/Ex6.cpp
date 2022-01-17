#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum_odd = 0, sum_even = 0, count_odd = 0, count_even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum_even += a[i];
            count_even++;
        }
        else
        {
            sum_odd += a[i];
            count_odd++;
        }
    }
    cout << sum_odd / count_odd << " " << sum_even / count_even << endl;
}