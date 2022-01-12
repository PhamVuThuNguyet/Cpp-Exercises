#include <bits/stdc++.h>
using namespace std;

int countSmallParcel(int nSmall, int nBig, int order)
{
    int nBigCandies = nBig * 5;
    int remain = order - nBigCandies;
    int smallParcel = round((float) remain / 2);
    if (smallParcel <= nSmall)
    {
        return smallParcel;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int nSmall, nBig, order;
    cin >> nSmall >> nBig >> order;
    cout << countSmallParcel(nSmall, nBig, order) << endl;
}