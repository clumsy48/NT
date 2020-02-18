//iterative repeated squaring
#include <bits/stdc++.h>
using namespace std;
int fib(int a,int b){
  int result =1;
  while(b>0){
     if(b&1){
         result*=a;
     } 
     a=a*a;
     b/=2;
  }
  return result;
}
int main()
{
    int a = 3;
    int n = 5;
    int ans = fib(a,n);
    cout << ans << endl;
    return 0;
}