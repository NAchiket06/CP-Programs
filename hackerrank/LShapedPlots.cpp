/*
    https://codingcompetitions.withgoogle.com/kickstart/round/0000000000436140/000000000068c509#problem
*/
#include <bits/stdc++.h>
using namespace std;

int i, j, k, l, temp;
vector<int> a,b,c;
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
    cin.tie(0); cout.tie(0);

    int te;
    int a[40][40];
    cin>>te;
    int l,ri,t,b;
    REP(k,te){
        int r,c,cnt=0;
        cin>>r>>c;
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++){
                cin>>a[i][j];
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
               if(a[i][j] == 1){
                    l = j; ri=j;
                    t= i; b =i;
                    while (a[i][l-1] == 1) l--;
                    while (a[i][ri + 1] == 1) ri++;
                    while (a[t][j] == 1) t--;
                    while (a[b][j] == 1) b++;
                    
                    l = j-l +1; ri=ri-j+1; t=i-t; b= b-i;
                    //cout<<i<<j<<": "<<l<<ri<<t<<b<<"\n";
                    if( (l==1 && ri==1) || (t==1 && b==1)) {
                        //cout<<"skipped \n";
                        continue;
                    }

                    if(ri!= 1 && t!=1) {
                        if(ri>t)
                            cnt+= max(0,min(ri/2,t)-1);
                        if(t>ri)
                            cnt += max(0, min(ri, t/2) - 1);
                        if (ri == t)
                            cnt += max(0, min(ri, t / 2) - 1) + 1;
                    }
                    if (ri != 1 && b != 1)
                    {
                        if(ri>b)
                            cnt += max(0, min(ri / 2, b) - 1);
                        if(ri<b)
                            cnt += max(0, min(ri, b/2) - 1);
                        if(ri == b)
                            cnt += max(0, min(ri, b / 2) -1  ) + 1;
                    }
                    if (l!= 1 && t != 1)
                    {
                        if (l > t)
                            cnt += max(0, min(l / 2, t) - 1);
                        if (t > l)
                            cnt += max(0, min(l, t / 2) - 1);
                        if (l == t)

                            cnt += max(0, min(l, t / 2) - 1) + 1;
                    }
                    if (l != 1 && b != 1)
                    {
                        if (l > b)
                            cnt += max(0, min(l / 2, b) - 1);
                        if (l < b)
                            cnt += max(0, min(l, b / 2) - 1);
                        if (l == b)
                            cnt += max(0, min(l/2, b / 2) -1  ) + 1;
                    }

                    //cout<<i<<j<<" " <<cnt<<"\n ";
                    // if (l != 1)
                    // {
                    //     if(t!=1)
                    //         cnt += max(0, min(l, t / 2) - 1);// + max(0, min(l/2, t) - 1);
                    //     if(b!=1)
                    //         cnt += max(0, min(l, b / 2) - 1);// + max(0, min(l / 2, b) - 1);
                    // }

                    //cout <<i<<" "<<j<<": "<< cnt << "\n";
                }
            }
        }

        cout<<"Case #"<<k+1<<": "<<cnt<<"\n";
    }
    return 0;
}