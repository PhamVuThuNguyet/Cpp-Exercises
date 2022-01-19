#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
    int winningPositions[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    int remain = 9;
    int count = 1;
    while (remain--)
    {
        // print board
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        // play
        int r, c;
        cin >> r >> c;
        if (count % 2 == 1)
        {
            if (arr[r][c] == '*')
            {
                arr[r][c] = 'X';
            }
            else
            {
                cout << "Please input again" << endl;
            }
        }
        else
        {
            if (arr[r][c] == '*')
            {
                arr[r][c] = 'O';
            }
            else
            {
                cout << "Please input again" << endl;
            }
        }
        count += 1;

        // check state
        for (int i = 0; i < 8; i++)
        {
            if ((arr[winningPositions[i][0] / 3][winningPositions[i][0] % 3] == arr[winningPositions[i][1] / 3][winningPositions[i][1] % 3]) && (arr[winningPositions[i][1] / 3][winningPositions[i][1] % 3] == arr[winningPositions[i][2] / 3][winningPositions[i][2] % 3]) && arr[winningPositions[i][0] / 3][winningPositions[i][0] % 3] != '*')
            {
                if (arr[winningPositions[i][0] / 3][winningPositions[i][0] % 3] == 'X')
                {
                    cout << "Player 1 Won" << endl;
                    return 1;
                }
                else
                {
                    cout << "Player 2 Won" << endl;
                    return 1;
                }
            }
        }
    }
    cout << "TIE" << endl;
}