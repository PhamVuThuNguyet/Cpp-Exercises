#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    map<int, int> frequency;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    cout << *max_element(arr, arr + n) << "\n" << frequency[*max_element(arr, arr + n)] << endl;
}