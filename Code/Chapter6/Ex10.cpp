#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool checkString(string s)
{
    if (stoi(s.substr(0, 1)) == 0)
    {
        return false;
    }
    else
    {
        for (int i = 1; i <= s.length(); i++)
        {
            if (stoi(s.substr(0, i)) % i != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << (checkString(s) ? "TRUE" : "FALSE") << endl;
}