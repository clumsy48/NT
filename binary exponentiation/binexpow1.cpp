
//recursive
#include <bits/stdc++.h>

using namespace std;
int fib(int a,int n){
    if(n==0){
        return 1;
    }
    int t = fib(a,n/2);
    if(n%2){
        return t*t*a;
    }else{
        return t*t;
    }
}
int main()
{
    int a = 3;
    int n = 5;
    int ans = fib(a,n);
    cout << ans << endl;
    return 0;
}
