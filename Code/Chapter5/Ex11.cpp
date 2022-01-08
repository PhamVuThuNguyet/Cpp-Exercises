#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<string> intToWord(int n)
{
    vector<string> s;
    while (n != 0)
    {
        int temp = n % 10;
        switch (temp)
        {
        case 0:
            s.push_back("Zero");
            break;
        case 1:
            s.push_back("One");
            break;
        case 2:
            s.push_back("Two");
            break;
        case 3:
            s.push_back("Three");
            break;
        case 4:
            s.push_back("Four");
            break;
        case 5:
            s.push_back("Five");
            break;
        case 6:
            s.push_back("Six");
            break;
        case 7:
            s.push_back("Seven");
            break;
        case 8:
            s.push_back("Eight");
            break;
        case 9:
            s.push_back("Nine");
            break;
        default:
            break;
        }
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int n;
    cin >> n;
    for (string s : intToWord(n))
    {
        cout << s << " ";
    }
}