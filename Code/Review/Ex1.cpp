#include <bits/stdc++.h>
using namespace std;

bool prime[5001];

void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= 5001; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 5001; i += p)
                prime[i] = false;
        }
    }
}
int main()
{
    SieveOfEratosthenes();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        if (prime[arr[i]])
        {
            count++;
        }
    }
    cout << count << endl;
}