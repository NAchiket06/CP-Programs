#include <bits/stdc++.h>
using namespace std;

int i, j, k, l, temp;
vector<int> a, b, c;
#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define MP make_pair
#define PB push_back

int main()
{
    int a[10000],b[10000],n,m,sa =0 ,sb=0,x,na=0,nb=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i] = x;
        sa+= a[i];
        if(x ==0){
            na+=1;
        }
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b[i] = x;
        sb+=x;
        if (x == 0)
        {
            nb += 1;
        }
    }
    cout<<na<<" "<<nb<<"\n";
    if (sa != sb && na == 0 || nb == 0)
    {
        cout << -1;
    }
    else
    {
        if (na + sa > nb + sb)
            cout << na + sa;
        else
            cout << nb + sb;
    }
}
