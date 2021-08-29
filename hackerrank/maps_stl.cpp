#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{

    ll n, q, marks;
    string name;
    map<string, int> m;

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        marks = 0;
        name ="";
        cin >> n;
        if (n == 1)
        {
            cin >> name >> marks;
        }
        else
            cin >> name;

        m.insert(make_pair(name, marks));
    }
    return 0;
}
