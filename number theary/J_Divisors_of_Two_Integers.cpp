#include <bits/stdc++.h>
using namespace std;
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
 

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           getDivisors(v[i]);
           getDivisors(v[j]);
           sort(divisors.begin(),divisors.end());
           if(v==divisors)
           {
               cout<<v[i]<<" "<<v[j]<<"\n";
               return 0;
           }
           divisors.clear();

        }
    }

    
}