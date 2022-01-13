#include <bits/stdc++.h>
using namespace std;

void sortNum(int n)
{
    vector<int> v;
    while (n != 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << " ";
    sort(v.begin(), v.end(), greater<int>());
    for (auto x : v)
        cout << x << " ";
}

int main()
{
    int n;
    cin >> n;
    sortNum(n);
}