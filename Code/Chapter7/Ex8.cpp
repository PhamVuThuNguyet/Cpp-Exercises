#include <bits/stdc++.h>
using namespace std;

int *insertX(int n, int arr[],
             int x, int pos)
{
    int i;

    n++;

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    return arr;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int elem, pos;
    cin >> pos >> elem;
    insertX(5, a, elem, pos);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
}