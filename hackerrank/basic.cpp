#include<iostream>
using namespace std;
int main(){
    int a;
    long b;
    char c;
    float d;
    double e;
    // cin >> a >> b >> c >> d >> e;
    // cout << a << "\n"<< b << "\n"<< c << "\n"<< d << "\n"<< e;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%f\n%lf",a,b,c,d,e) ;
    return 0;
}