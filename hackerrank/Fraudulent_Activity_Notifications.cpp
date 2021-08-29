#include <bits/stdc++.h>
#include <vector>
using namespace std;

float median(int ar[], int d, int i)
{
    
    //cout<<"\n";
    // for(int j=i-d;j<i;j++)
    //     cout << ar[j];

    //cout<<"\nfinding median from "<<i-d<<"-"<<i-1<<"\n";
    sort(ar + i - d, ar + i);
    //for(int j=i-d;j<i;j++)
    //      cout << ar[j]<<" ";

    int s = i - d, e = i - 1;
    int m = (e - s) / 2;
    //cout<<"\n"<<s<<" "<<e<<" "<<s+m<<"\n";

    if (d % 2 == 0)
    {
        return (double)(ar[s+m] + ar[s+m + 1]) / 2.0;
    }

    else
    {
        return (double)ar[s+m];
    }

    return 0;
}

int main()
{

    int n, d, i, x, ar[20005], s = 0, notif = 0;
    float e, m;
    cin >> n >> d;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        ar[i] = x;

        if (i >= d)
        {
            m = median(ar, d, i);
           // cout<<"For  i= "<<i<<" median is :"<<m<<" and ar[i] = "<<ar[i]<<"\n\n";
            if (ar[i] >= 2*m)
                notif++;
        }
    }
    cout << notif;
    return 0;
}