#include <bits/stdc++.h>
#define fastcin ios_base::sync_with_stdio(false)\
                            ;cin.tie(NULL) 
using namespace std;
const int N=1e6+5;

int main()
{    
    long long x,n;
    cin>>x>>n;
    if((x%n)%n==0)
    {
        cout<<"YES";
    }else
    {
        cout<<"NO";
    }



    return 0;
}
