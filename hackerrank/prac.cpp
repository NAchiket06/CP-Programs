
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void q1();
void q2();
void q3();
void q4();
void q5();

int main(){
    q4();
}

void q5(){
/*
4 4
16 28 60 64 22 41 63 91 27 50 87 93 36 78 87 94
3
*/

    int i,j,k,n,m,a[100][100];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for (j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>k;
    int x = k%n - 1;
    for(i=0;i<m;i++){
        //cout<<n * i  + x + 1<<"\n";
        if(i * n + x + 1== k){
            cout<<"The "<<k<<" smallest element is "<<a[x][i];
        }
    }
}
void q4(){
/*
3 3 
1 2 3 4 5 6 7 8 9 
*/

    int i,j,k,n,m,a[100][100];
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Rotated Matrix is: \n";
    for(i=0;i<n;i++){
        for(j=m-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
}

void q2(){
/*
4 4 
0 1 1 0 1 1 1 1 1 1 1 1 1 1 0 0
*/
    int i,j,k,n,m,a[100][100];
    cin>>n>>m;
    for(i =0 ;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int ar[100],area =0,temp=0,count =0,mini = 1000;
    for(int i=0;i<n;i++){
        //init the histogram array
        for(j=0;j<m;j++){
            if(a[i][j] == 1){
                ar[j] +=1;
            }
            if(a[i][j] == 0){
                ar[j] = 0;
            }
        }
        //get area of this iter
        count =0;
        mini = 10000;
        for(k=0;k<m;k++){
            if (ar[k] == 0)
            {
                area = max(area, count  * mini);
                count = 0;
                continue;
            }
            if(ar[k] < mini){
                mini = ar[k];
            }
            count++;
            if (k == m - 1)
            {
                area = max(area, count * mini);
            }

        }
    }
    cout<<"The maximin area is: "<<area;
//     int l,d,ml=0,md=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             l=j;d=i;
//             while(a[i][l] == 1){                   
//                 l++;
//                 if(l == m){
//                     break;
//                 }
//             }
//             while(a[d][j] == 1){
//                 d++;
//                 if(d == n){
//                     break;
//                 }
//             }
//             l-=j;
//             d-=i;
//             if(l*d >= ml*md){
//                 ml = l;
//                 md = d;
//             }
//         }
//     }
//     cout<<"The Max Area of Rect is: "<<ml*md;   
// }
// void q1(){
// /*
// 4 4
// 10 20 30 40 15 25 35 45 27 29 37 48 32 33 39 50
// */

//     int i, j, k, n, m, a[100][100], counter = 0;
//     vector<int> ar;
//     cin >> n >> m;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             cin >> k;
//             ar.push_back(k);
//         }
//     }
//     sort(ar.begin(), ar.end());
//     cout << "The sorted matrix is: \n";
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             a[i][j] = ar[counter];
//             counter++;
//             cout << a[i][j] << " ";
//         }
//         cout << "\n";
//     }
}

