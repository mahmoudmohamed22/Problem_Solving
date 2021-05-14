#include <bits/stdc++.h>
using namespace std;
const int N=1073741824;
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
    long long sum=0;
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                getDivisors(i*j*k);  
                sum+=(divisors.size())%N;
                divisors.clear();

            }
        }
    }
    cout<<sum<<"\n";
    //cout<<2e30<<"\n";
   
}