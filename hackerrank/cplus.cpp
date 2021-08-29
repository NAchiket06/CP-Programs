#include <iostream>
#include<algorithm>
#include<vector>
#include <deque>
using namespace std;
typedef long long ll;
int FindGreatest(deque d,ll s,ll e ){
    return *max_element(d.begin(), d.end());
}
void printKMax(deque<int> v, int n, int k)
{
    ll i=0,s=0,e=0,g=0;
    deque<int> indexes;
    for(i=0;i<k;i++){
        if(v[i] > g ){
            g=v[i];
        }
    }


    
    cout<<endl;
}

int main()
{
    deque<int> v;
    int t =0;
    cin >> t;
    while (t > 0)
    {
        v.clear();
        ll n =0, k=0;
        cin >> n >> k;
        ll i=0;
        ll arr=0;
        for (i = 0; i < n; i++){
            cin >> arr;
            v.push_back(arr);
        }
        printKMax(v, n, k);
        t--;
    }
    return 0;
}