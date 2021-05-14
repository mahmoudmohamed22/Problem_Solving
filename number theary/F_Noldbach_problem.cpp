#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2000;
bool b[N];
vector<int> v;
void sieve(int n){
    for(int i=1;i<=n;i++) b[i]=1;
    b[0] = b[1] = 0;
    for(int i = 2; i < N; ++i){ /// O(N * log(log(N))) ~ O(N)
        if(b[i]){
            v.push_back(i);
            for(ll j = 1LL*i*i; j < N; j += i){
                b[j] = 0;
            }
        }
    }
}
 
/// Goldbach's conjecture: every even number > 2 can be divided into 2 prime numbers
 
void goldbach(int n){
    /*for(int i=1;i*2<=n;i++){  ///O(n/2)
        if(b[i] && b[n-i]){
            cout<<i<<" "<<n-i<<endl;
            break;
        }
    }*/
    for(auto x:v){
        if(b[n-x]){
            cout<<x<<" "<<n-x<<endl;
            break;
        }
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    sieve(55);
    goldbach(45);
}