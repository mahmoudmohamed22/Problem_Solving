/**
  * Multiples
  * Divisors
  * Primes
  * sieve
  * Goldbach's conjecture
  */
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
vector<int> multiples;
void getMultiples(int n){
    for(int i = n; i <= N; i += n){ /// O(N/n)
        multiples.push_back(i);
    }
}
 
/**
1 * 36
2 * 18
3 * 12
4 * 9
6 * 6
9 * 4
12 * 3
18 * 2
36 * 1
**/
vector<int> divisors;
void getDivisors(int n){
    for(int i = 1; i * i <= n; ++i){    /// O(sqrt(n))
        if(n % i == 0){
            divisors.push_back(i);
            if(i * i != n)
                divisors.push_back(n/i);
        }
    }
}
 
bool is_Prime(int n){
    if(n == 2) return 1;
    if(n % 2 == 0 || n == 1) return 0;
    for(int i = 3; i * i <= n; i += 2){    /// O(sqrt(n))
        if(n % i == 0) return 0;
    }
    return 1;
}
 
/// sieve of Eratosthenes
//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//0 0 1 1 0 1 0 1 0 0  0  1  0  1  0  0  0  1  0  1  0
//Number of primes in range N in N * log(log(N)) ~ O(N)
 
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
int n,t;
int main() {
    cin>>t;
    ///sieve(1e6);
    while(t--) {
        cin >> n;
        ///cout<<is_Prime(n);
        ///getDivisors(n);
        ///getMultiples(n);
        ///goldbach(n);
    }
    return 0;
}