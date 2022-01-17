#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;

vector<int> primes;

void sieveSundaram()
{
    bool marked[MAX / 2 + 1] = {0};

    for (int i = 1; i <= (sqrt(MAX) - 1) / 2; i++)
    {
        for (int j = (i * (i + 1)) << 1; j <= MAX / 2; j = j + 2 * i + 1)
        {
            marked[j] = true;
        }
    }

    primes.push_back(2);

    for (int i = 1; i <= MAX / 2; i++)
    {
        if (marked[i] == false)
        {
            primes.push_back(2 * i + 1);
        }
    }
}
int main()
{
    sieveSundaram();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (find(primes.begin(), primes.end(), arr[i]) != primes.end())
        {
            count++;
        }
    }
    cout << count << endl;
}