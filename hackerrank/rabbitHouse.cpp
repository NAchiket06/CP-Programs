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

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r,c,te,maxi = -1,maxj = -1,visited[500][500],cnt =0;
    int a[400][400];
    cin>>te;
    while(te>0){
        cin>>r>>c;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cin>>a[i][j];
                if(a[i][j] > a[maxi][maxj]){
                    maxi = i;
                    maxj = j;
                }
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                
            }
        }
    }
    return 0;
}
int getcount(){

}