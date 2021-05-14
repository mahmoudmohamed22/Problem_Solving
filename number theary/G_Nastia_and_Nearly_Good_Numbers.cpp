#include <bits/stdc++.h>
using namespace std;


int main() {
    long long  t;
    cin>>t;
    long long a,b;
    while (t--)
    {
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO\n";
        }else 
        {
            cout<<"YES\n";
            cout<<a*b<<" "<<a<<" "<<a+(a*b)<<"\n";
        }
        
    }
    
}