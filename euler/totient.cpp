#include <bits/stdc++.h>
#define ll long long
using namespace std;

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}
int main(){
    for(int i=2;i<=20;++i)
    cout << i << " " << phi(i) << endl;;
}