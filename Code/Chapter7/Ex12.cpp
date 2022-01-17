#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row;
    cin >> row;

    int sum_ = 0;
    int max_ = arr[row][0];
    int min_ = arr[row][0];
    for (int i = 0; i < c; i++)
    {
        sum_ += arr[row][i];
        if (arr[row][i] <= min_)
        {
            min_ = arr[row][i];
        }
        if (arr[row][i] >= max_)
        {
            max_ = arr[row][i];
        }
    }
    cout << sum_ << " " << max_ << " " << min_ << endl;

    int col;
    cin >> col;

    sum_ = 0;
    max_ = arr[0][col];
    min_ = arr[0][col];
    for (int i = 0; i < r; i++)
    {
        sum_ += arr[i][col];
        if (arr[i][col] <= min_)
        {
            min_ = arr[i][col];
        }
        if (arr[i][col] >= max_)
        {
            max_ = arr[i][col];
        }
    }
    cout << sum_ << " " << max_ << " " << min_ << endl;
}