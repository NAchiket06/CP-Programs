#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    m.insert(make_pair(1,5));
    int x= m[1];

    for(map<int,int>::iterator it = m.begin();it!=m.end();++it)
    {
        cout<<it->first;
    }
    cout<<"\n";
    cout<<x;
}
    




