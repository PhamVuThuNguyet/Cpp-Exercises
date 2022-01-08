#include <bits/stdc++.h>
using namespace std;

void printReverse(int n)
{
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printReverse(n);
}