#include<bits/stdc++.h>
using namespace std;

int getFitness(int arr[8]){
    int fitness=0,sum=0;

    for(int i=0;i<7;i++){
        sum=7-i;
        for(int j=i+1;j<7;j++){

            if(arr[i] == arr[j] || arr[i] + j == arr[j] || arr[i] -j == arr[j] ){
                //cout<<i+1<<" attacking "<<j<<"   ";
                sum--;
            }
        }
        cout << "queen " << i + 1 << " :" << sum << "\n";

        //cout<<"\n";
        fitness += sum;
    }
    //cout << "Fitness for " << fitness << "\n";

    return fitness;
}
int main(){

    int i,j,k,n,m;
    int individuals[4][8];

    for(i=0;i<4;i++){
        for(j=0;j<8;j++){
            cin>>individuals[i][j];
        }
    }

    int fitness[4];
    for(i=0;i<4;i++){
        fitness[i] = getFitness(individuals[i]);
        cout<<i<<" "<<fitness[i]<<"\n";
    }
}

/*
3 2 7 5 2 4 1 1 
2 4 7 4 8 5 5 2
3 2 5 4 3 2 1 3
2 4 4 1 5 1 2 4
*/