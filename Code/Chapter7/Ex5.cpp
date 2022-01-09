#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << (float)(*max_element(begin(arr), end(arr)) + *min_element(begin(arr), end(arr))) / 2 << endl;
}