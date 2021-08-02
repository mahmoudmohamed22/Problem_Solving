#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  t,n;
    long long sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=((1+n)*n)/2;
        vector<long long>power;
        power.push_back(1);
        for(int i=1;i<=32;i++)
        {
          power.push_back(power[i-1]*2);
        }
        long long sum2=0;
        for(int i=0;i<32;i++)
        {
          if(power[i]<=n)
          {
              sum2+=power[i];
          }
        }
        sum=sum-sum2-sum2;
        cout<<sum<<"\n";
        sum=0;
        sum2=0;

    }
}