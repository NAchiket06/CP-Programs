#include<iostream>
using namespace std;
int main()
{
    int mul = 1, sum = 0,currentJumps =0;
    int x, y, n, r = 0;
    cin >> x >> y >> n;
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int temp = x-y;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= x)
        {
            sum += 1;
            continue;
        }
        currentJumps=0;
        int h = arr[i];

        while(h>0){
            h-=temp;
            currentJumps++;
            if(h <= x ){
                currentJumps++;
                break;
            }
        }
       sum += currentJumps;
    }
    cout<<"\n"<<sum;
}
