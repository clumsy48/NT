#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
    vector<int> phi(n+1);
    for(int i=0;i<=n;++i) {
        phi[i]=i;
    }
    for(int i=1;i<=n;++i) {
        if(phi[i]==i){
            phi[i]=i-1;
            for(int j=2*i;j<=n;j=j+i){
                   phi[j] = phi[j]*((i-1))/i; 
            }
        }
    }
    for(int i=1;i<=n;++i) {
        cout << i << " " << phi[i] << endl;
     }
}
int main(){
    solve(12);
    return 0;
}