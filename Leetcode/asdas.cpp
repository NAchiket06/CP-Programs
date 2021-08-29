#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    set<int> bus;
    bool pos=true;
    int n,m,q,x;
    char ch;
    int i, j, k, temp;
    cin >> t;
    while (t != 0)
    {
        pos = true;
        cin>>n>>m>>q;
        for(i=0;i<q;i++){
            cin>>ch>>x;           
            if((int)ch==43){
                bus.insert(x);
                if(bus.size()>m){
                    pos = false;
                }
            }

            else{
                if(bus.find(x) == bus.end()){
                    pos = false;
                }
                else bus.erase(x);
            }
        }

        if(pos == true){
            cout<<"Consistent";
        }
        else cout<<"Inconsistent";
        t--;
    }
    return 0;
}
/*
2
100 10 5
+ 1
+ 2
- 3
+ 3
- 2
6 4 4
+ 3
+ 2
+ 1
+ 4

2
2 1 4
+ 1
+ 2
- 1
- 2
3 2 6
+ 2
+ 1
- 1
+ 3
- 3
- 2
*/