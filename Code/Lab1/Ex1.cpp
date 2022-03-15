#include <bits/stdc++.h>
using namespace std;

void input(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        cin >> *(ptr + i);
    }
}

void printOut(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
}

int removeAllOdd(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) % 2 != 0)
        {
            for (int j = i; j < size - 1; j++)
            {
                *(ptr + j) = *(ptr + j + 1);
            }
            i--;
            size--;
        }
    }
    return size;
}

int main()
{
    int *ptr;
    int arr[10];
    ptr = arr;
    input(ptr);
    printOut(ptr, 10);
    cout << "\nAfter remove" << endl;
    int remain = removeAllOdd(ptr, 10);
    printOut(ptr, remain);
}