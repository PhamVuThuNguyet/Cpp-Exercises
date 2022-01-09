#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for (auto &x : arr)
    {
        cout << x.first << " ";
    }
}