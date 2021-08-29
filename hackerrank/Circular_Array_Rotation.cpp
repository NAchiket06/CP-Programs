#include <bits/stdc++.h>
using namespace std;

int i, j, k, l, temp;
//vector<int> a,b,c;
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int>x;
    int n,k,q,temp;
    cin>>n>>k>>q;
    for(i=0;i<n;i++){
        cin>>x[i];
    }

    for(i=0;i<q;i++){
        cin>>temp;
        int res = ((k-1) + temp) % n;
        cout<<x[res]<<" ";
    }
    return 0;
}
