#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q, i, k, t;
    vector<vector<int>> a;
    vector<int> temp;
    cin >> n >> q;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {

            cin >> t;
            temp.push_back(t);
        }
        a.push_back(temp);
        temp.clear();
    }
    int x, y;
    for (i = 0; i < q; i++)
    {
        cin >> x >> y;
        cout << a[x][y] << "\n";
    }
    return 0;
}
