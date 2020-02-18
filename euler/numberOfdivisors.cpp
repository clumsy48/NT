#include <bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
bool primes[N];
vector<int> ps;
void sieve(){
    for(int i=0;i<N;++i){
        primes[i]=true;
    }
    primes[0] = false;
    primes[1] = false;
    primes[2] = true;
    for(int j=2*2;j<=N;j=j+2){
            primes[j]=false;
    }
    for(int i=3;i*i<=N;i+=2){
        if(!primes[i]) continue;
        for(int j=i*i;j<=N;j=j+i){
            primes[j]=false;
        }
    }
    for(int i=0;i<N;++i){
        if(primes[i]){
            ps.emplace_back(i);
        }
    }
}
ll divisorCounter(ll n){
    ll m=n;
    ll ans=1;
    for(ll i=0;i<ps.size()&&ps[i]<=m;++i){
        if(m%ps[i]==0){
            ll e=0;
            while(m%ps[i]==0){
                e++;
                m=m/ps[i];
            }
            ans*=(e+1);
        }
    }
    return ans;
    
}
int main()
{
    ll n=8;
    sieve();
    ll ans = divisorCounter(n);
    cout << ans << endl;
    return 0;
}
