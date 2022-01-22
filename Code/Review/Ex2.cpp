#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        if ((n % 10) % 2 != 0)
        {
            v.push_back(n % 10);
        }
        n /= 10;
    }
    if (v.size() == 0)
    {
        cout << "N" << endl;
    }

    else
    {
        int temp = v.size();
        for (int i = 0; i < temp; i++)
        {
            cout << v.back() << " ";
            v.pop_back();
        }
    }
}