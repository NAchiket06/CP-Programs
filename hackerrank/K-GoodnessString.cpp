/*
Charles defines the goodness score of a string as the number of indices i such that Si≠SN−i+1 where 1≤i≤N/2 (1-indexed). 
For example, the string CABABC has a goodness score of 2 since S2≠S5 and S3≠S4.

Charles gave Ada a string S of length N, consisting of uppercase letters and asked her to convert it into a string with
 a goodness score of K. In one operation, Ada can change any character in the string to any uppercase letter. Could you 
 help Ada find the minimum number of operations required to transform the given string into a string with goodness score 
 equal to K?

Input
The first line of the input gives the number of test cases, T. T test cases follow.

The first line of each test case contains two integers N and K. The second line of each test case contains a string S 
of length N, consisting of uppercase letters.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the
minimum number of operations required to transform the given string S into a string with goodness score equal to K.

Sample Input   
 
2
5 1
ABCAA
4 2
ABAA

Sample Output

Case #1: 0
Case #2: 1
*/

#include <bits/stdc++.h>
using namespace std;

int i, j, k, l, temp;
//vector<int> a,b,c;
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
    cin.tie(0);
    cout.tie(0);
    int t;
    int cnt;
    cin >> t;
    REP(i, t)
    {
        cnt = 0;
        string s;
        int n, k;
        cin >> n >> k;
        cin >> s;
        //cout << s;
        REP(j, n / 2)
        {
            if (s[j] != s[n - j - 1])
            {
                cnt++;
            }
        }

        if (cnt < k)
        {
            cout << "Case #" << i + 1 << ": " << k - cnt << "\n";
        }
        if (cnt > k)
        {
            cout << "Case #" << i + 1 << ": " << cnt - k << "\n";
        }
        else if (cnt == k)
        {
            cout << "Case #" << i + 1 << ": 0\n";
        }
    }
    return 0;
}
