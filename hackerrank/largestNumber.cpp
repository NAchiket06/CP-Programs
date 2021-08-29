/*
Geek lost the password of his super locker. He remembers the number of digits N as well as the sum S 
of all the digits of his password. He know that his password is the largest number of N digits that 
can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

Example 1:
Input:
N = 5, S = 12
Output:
93000
Explanation:
Sum of elements is 12. Largest possible 5 digit number is 93000 with sum 12.
*/

#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    

    int x=0;
    long num=0;
    while (sum !=0)
    {

        if(sum >9 && n == 1 ){
            return -1;
        }
        if(sum >= 9)
        {
            x=9;
        }
        else x = sum;

        sum -=x;
        num = num*10 + x;
        n--;
        cout<<n<<" "<<num<<"\n";
    }
    
    while(n > 0){
        n--;
        num *=10;
        cout << n << " " << num << "\n";
    }

    cout<<num;


}