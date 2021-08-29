#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> p;
    stringstream s(str);
    int n;
    char temp;

    while (s >> n)
    {
        p.push_back(n);
        if (s.peek() == ',')
        {
            s.ignore();
        }
    }

    return p;
}

int main()
{

    string str;
    cin >> str;
    vector<int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
