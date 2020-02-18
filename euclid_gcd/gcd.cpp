//recursive
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int a = 100;
    int b = 25;
    int ans = gcd(a,b);
    cout << ans << endl;
    return 0;
}
