#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool primes[5000001];
vector<int> ps;

void sieve(){
    int N = 5000001;
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll sum = 1;
        ll m =n;
        for(int i=0;i<ps.size()&&ps[i]<=m;++i){
               ll e=0;
               ll powps = ps[i];
               while(m%ps[i]==0){
                   e++;
                   powps*=ps[i];
                   m=m/ps[i];
               }
               if(e==0) continue;
               sum *= (powps-1)/(ps[i]-1);
        }
        if(n==1) cout << "0\n";
        else if(n==2) cout << "1\n";
        else cout << sum << endl;
    }
    return 0;
}
