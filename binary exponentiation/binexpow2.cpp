//recursive repeated squaring
#include <bits/stdc++.h>
using namespace std;
int fib(int a,int n){
    if(n==0){
        return 1;
    }
    if(n%2){
        return a*fib(a*a,(n-1)/2);
    }else{
        return fib(a*a,n/2);
    }
}
int main()
{
    int a = 2;
    int n = 8;
    int ans = fib(a,n);
    cout << ans << endl;
    return 0;
}
//credits : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/tutorial/