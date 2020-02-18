#include <bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
#define p_int pair<int,int>
using namespace std;
p_int fib(int n){
    if(n==0){
        return mp(1,0);
    }
    auto t = fib(n/2);
    int x = t.first + t.second;
    int y = t.first;
    if(n%2){
        return mp(x+y,x);
    }else{
        return mp(x,y);
    }
}
int main()
{
    int n=8;
    auto t = fib(n-1);
    cout << t.first << endl;
    return 0;
}
