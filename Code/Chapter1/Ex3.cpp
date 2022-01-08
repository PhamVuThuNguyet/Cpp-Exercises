#include <bits/stdc++.h>
using namespace std;

int octToDec(int n)
{
    int dec = 0;
    int count = 1;

    while (n != 0)
    {
        int temp = n % 10;
        dec += temp * count;
        count *= 8;
        n /= 10;
    }

    return dec;
}

string decToHex(int n)
{
    char hex[100];
    int count = 0;
    while (n != 0)
    {
        int temp = n % 16;
        // Convert Integer to char
        if (temp < 10)
        {
            hex[count++] = temp + 48;
        }

        else
        {
            hex[count++] = temp + 55;
        }
        n /= 16;
    }
    reverse(hex, hex + strlen(hex));
    return hex;
}

int main()
{
    int octNum = 11672;
    cout << decToHex(octToDec(octNum)) << endl;
}