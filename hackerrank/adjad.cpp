
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    int i, j, k, n, m, a[100][100], counter = 0;
    vector<int> ar;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>k;
            ar.push_back(k);
        }
    }
    sort(ar.begin(),ar.end());
    cout<<"The sorted matrix is: \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j] = ar[counter];
            counter++;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
