#include<iostream>
#include<vector>
using namespace std;

vector<int> findMean(int arr[],int queries[],int n,int q){
    vector<int> a;
    int sum =0,mean =0,start =0;
    for(int i=0;i<q;i++){
        mean =0 ;
        sum =0;
        // get first and last from queries
        int s = queries[start];
        int e = queries[start+1];

        //iteratr arr to get sum
        for(int j=s;j<=e;j++)
            sum += arr[j];


        // get mean
        //cout<<"sum: "<<sum<<" dif: "<<e-s<<"\n";
        mean = sum / (e - s +1 );

        //add mean to a
        a.push_back(mean);

        start +=2;
    }

    return a;
}
int main(){

    int n,q,arr[100000],queries[10000];
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for ( int i = 0; i < q*2; i++)
    {
      cin>>queries[i];
    }
    vector<int> ans = findMean(arr,queries,n,q);
    for(int k:ans)
        cout<<k<<" ";


    return 0;
}