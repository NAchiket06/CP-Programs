#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int i, j, k, r = 4, c = 4, mat[10000][10000], top = 0, bottom = r - 1, left = 0, right = c - 1;

    cin >> r >> c;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    

    while (1)
    {
        if (left > right)
        {
            break;
        }
        // print top row
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;

        if (top > bottom)
        {
            break;
        }
        // print right column
        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--;

        if (left > right)
        {
            break;
        }
        // print bottom row
        for (int i = right; i >= left; i--)
        {
            cout << mat[bottom][i] << " ";
        }
        bottom--;

        if (top > bottom)
        {
            break;
        }
        // print left column
        for (int i = bottom; i >= top; i--)
        {
            cout << mat[i][left] << " ";
        }
        left++;
    }
}

