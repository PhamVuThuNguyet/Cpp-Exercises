#include <bits/stdc++.h>
using namespace std;

int binToDec(int n)
{
    int dec = 0;
    int count = 1;

    while (n != 0)
    {
        int temp = n % 10;
        dec += temp * count;
        count *= 2;
        n /= 10;
    }

    return dec;
}

int main()
{
    int num = 1001001100;

    cout << binToDec(num) << endl;
}