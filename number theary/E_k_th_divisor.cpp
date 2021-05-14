#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<long long > divisors;
void getDivisors(long long n){
    for(long long i = 1;i * i <= n; ++i){    /// O(sqrt(n))
        if(n % i == 0){
            divisors.push_back(i);
            if(i * i != n)
                divisors.push_back(n/i);
        }
    }
}
int main() {
    long long n,k;
    cin>>n>>k;
    getDivisors(n);
    sort(divisors.begin(),divisors.end());
    if(k>divisors.size()){
        cout<<"-1"<<"\n";
    }else {
        cout<<divisors[k-1];
    }
    
}