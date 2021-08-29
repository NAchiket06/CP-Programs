/*
https://codingcompetitions.withgoogle.com/kickstart/round/0000000000435a5b/000000000077a3a5
*/
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
    int a[2000],n;
    int te, t;
    cin >> te;
    REP(t, te)
    {
        cin>>n;
        REP(i,n){
            cin>>a[i];
        }
        int  c=1,m=1,ma=0;
        int d = abs(a[1] -a[0]);
        for (i = 1; i < n; i++)
        {
            int temp = abs(a[i] - a[i - 1]);
            if(temp == d && m>=0){
                c++;
            }
            if(temp != d){
                m--;
                if(m==0){
                    i++;
                    c++;
                    if(i<n-1){
                        c++;
                    }
                }

            }
            ma = max(ma, c);

            if(m== -1){
                //ma = max(ma,c);
                m=1;
                c=0;
                d = abs(a[i] - a[i+1]);
            }

        }
        
        
       
        cout << "Case #" << t + 1 << ": " << ma << "\n";
    }
    return 0;
}
