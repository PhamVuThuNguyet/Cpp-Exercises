#include <bits/stdc++.h>
using namespace std;

int hexToDec(int n)
{
    int dec = 0;
    int count = 1;

    while (n != 0)
    {
        int temp = n % 10;
        dec += temp * count;
        count *= 16;
        n /= 10;
    }

    return dec;
}

int decToOct(int n)
{
    int oct = 0;
    int count = 1;
    while (n != 0)
    {
        oct += (n % 8) * count;
        n /= 8;
        count *= 10;
    }
    return oct;
}

int main()
{
    int hexNum = 1056;
    cout << decToOct(hexToDec(hexNum)) << endl;
}