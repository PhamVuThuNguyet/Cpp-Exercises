#include <bits/stdc++.h>
using namespace std;

vector<bool> Eratos(int n)
{
    vector<bool> mark(n + 1, true);
    mark[0] = mark[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (mark[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                mark[j] = false;
            }
        }
    }
    return mark;
}

int primorial(int n, vector<bool> v)
{
    int count = 0;
    int result = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i])
        {
            result *= i;
            count++;
        }
        if (count == n)
        {
            return result;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<bool> v = Eratos(5000);
    cout << primorial(n, v) << endl;
}