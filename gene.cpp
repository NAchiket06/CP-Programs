#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int i, j, k, n=4, m;
int individuals[1000][9],maxxx[2];

void getInput(){
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            cin >> individuals[i][j];
        }
    }
}

int getFitness(int arr[8])
{
    int fitness = 0, sum = 0;

    for (int i = 0; i < 8; i++)
    {
        sum = 7 - i;
        for (int j = i + 1; j < 8; j++)
        {
            int ari = arr[i];
            int arj = arr[j];
            int x = ari + j - i, y = ari - j + i;
            if (arr[i] == arr[j] || x == arr[j] || y == arr[j])
            {
                //cout << "Queen " << i + 1 << " attacking " << j + 1 << "   ";
                sum--;
            }
        }
        //cout << "queen " << i + 1 << " :" << sum << "\n";

        //cout<<"\n";
        fitness += sum;
    }
    //cout << "Fitness for " << fitness << "\n";

    return fitness;
}

void getNewParents(int arr1[],int arr2[]){
    int i,j;
    int random = rand() % 6;
    for(i=0;i<random;i++){
        individuals[n][i] = arr1[i];
        individuals[n+1][i] = arr2[i];
    }

    for(i= random;i<8;i++){
        individuals[n][i] = arr2[i];
        individuals[n+1][i] = arr1[i];
    }
    n+=2;
}

void getHighest(int start){
    int m1 = start,m2 =start+1;
    for(int i=start+1;i<start+4;i++){
        if(individuals[i][8] > m1){
            m2 = m1;
            m1 = i;
            continue;
        }
        if(individuals[i][8] > m2){
            m2 = i;
        }
    }
    maxxx[0] = m1;
    maxxx[1] = m2;
}

void Mutate(){
    
}

int main()
{
    int i, j, k=0;
    getInput();   

    int noOfGenerations  = 4, fitness = 0;
    int fitness1 = 0, fitness2 = 0;

    for(i=0;i<noOfGenerations;i++){

        fitness = getFitness(individuals[i]);
        individuals[i][8] = fitness;
    }

    // 4 random parents of highest 
    getNewParents(individuals[0],individuals[1]);
    getNewParents(individuals[0], individuals[1]);

    
    while(fitness1 != 28 || fitness2 != 28){
    
        //check 2 new rows for fitness
        fitness1 = getFitness(individuals[n-2]);
        
        individuals[n-2][8] = fitness1;
        fitness2 = getFitness(individuals[n-1]);
        individuals[n-1][8] = fitness2;
        if (fitness1 == 28 || fitness2 == 28)
        {
            cout << "found";
        }

        if(n==1000){
            cout<<"No soution Found";
            return 0;
        }

        getHighest(n-4);
        getNewParents(individuals[maxxx[0]], individuals[maxxx[1]]); // gives 2 new rows
        getNewParents(individuals[maxxx[0]], individuals[maxxx[1]]); // gives 2 new rows
    }
}

/*
3 2 7 5 2 4 1 1 
2 4 7 4 8 5 5 2
3 2 5 4 3 2 1 3
2 4 4 1 5 1 2 4
*/