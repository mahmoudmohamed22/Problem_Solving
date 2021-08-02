#include <bits/stdc++.h>
const long long N=1e18;
using namespace std;

int main() {
    long long a,b;
    cin>>a>>b;
    if(b-a>=10)
    {
        cout<<"0";
        return 0;
    }
    long long lastdigit,ans=1;

    for(long long i=a+1;i<=b;i++)
    {
        lastdigit=i%10;
        ans*=lastdigit;
        ans%=10;
        
    }
    cout<<ans<<"\n";
    
    
}