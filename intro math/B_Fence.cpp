#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long  cum[N];
long long  ss[N];
int main() {
    int ar[N];
    int n,k; 
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        cum[i]=cum[i]+ar[i];
        if(i)
        {
            cum[i]+=cum[i-1];
        }
    }
    int l=0;
    vector<long long>v;
    for(int i=k-1;i<n;i++)
    {   if(i==k-1)
        ss[i]=cum[i];
        else
        {
            ss[i]=cum[i]-cum[l++];
        }
        
        
    }
    long long  min=LONG_LONG_MAX;
    int index=0;
     for(int i=k-1;i<n;i++)
    {    if(ss[i]<min){
         min=ss[i];
         index=i;
         }
        
        
    }
    
    cout<<index-k+2<<"\n";
}
