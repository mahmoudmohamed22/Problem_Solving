
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const int N=1e6+10;
bool b[N];
void sieve(int n){
    for(int i=1;i<=n;i++) b[i]=1;
    b[0] = b[1] = 0;
    for(int i = 2; i < N; ++i){ /// O(N * log(log(N))) ~ O(N)
        if(b[i]){
            
            for(ll j = 1LL*i*i; j < N; j += i){
                b[j] = 0;
            }
        }
    }
}
int main() {
    sieve(N);
    long long  n;
    cin>>n;
    long long x;
    for(int i=0;i<n;i++){
        cin>>x;
        long long m=sqrt(x);
        if(m*m==x && b[m])
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
       
    }
    
}