#include <iostream>
using namespace std;

int checkSwap(int a, int b, int ar[]){

    
return 0;
}
int main()
{

    int n, ar[100005], i,swapCount=0,s1=-1,s2=-1,outOfPlace=-1,temp;
    cin >> n;
    for(i=0;i<n;i++) {
        cin>>ar[i];
    }

    for(i=1;i<n;i++){
        if(ar[i] < ar[i-1] && s1!=-1){
           s1=i-1; 
        }

        else {
            s2= ar[i-1];
            if(checkSwap(s1,s2,ar)){
                cout<<"swap "<<s1<<" "<<s2; 
            }
        }
    }



    return 0;
}