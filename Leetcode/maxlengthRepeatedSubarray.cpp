#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,j,k,n,m,num;
    vector<int> a;
    vector<int> b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
        
    }
    num = a.size();
    cout<<num;
    cin>>m;
    for(i=0;i<m;i++){
        cin>>num;
        b.push_back(num);
    }

    int dp[10000][10000];
    for(i=0;i<n+1;i++){
        for(j=0;j<m+1;j++){
            dp[i][j] =0;
        }
    }
    
    return 0;
}
/*
5
1 2 8 2 1
5
8 2 1 4 7
*/