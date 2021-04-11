
#include <bits/stdc++.h>
using namespace std;
int main() 
{    int N=1e6+100;
    multiset<int>se;
    int  a[N]={0};
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
     int max=-1;
    for(int i=0;i<1e6;i++){
        if(max<a[i])
        {
            max=a[i];

        }
    }
    cout<<se.count(max)<<"\n";
    
   


    return 0;
}