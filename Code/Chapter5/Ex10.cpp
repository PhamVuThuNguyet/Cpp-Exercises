#include <bits/stdc++.h>
#include <string>
using namespace std;

void checkPalindrome(string s)
{
    string s2 = s;
    reverse(s.begin(), s.end());
    if (s == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    checkPalindrome(s);
}