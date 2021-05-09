#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long k;
    int l=0,m=0;
    vector<int>v;
    cin>>n>>k;;
    int x;
    for(int i=0;i<n;i++)
    {
cin>>x;
v.push_back(x);
    }
       for(int i=0;i<n;i++)
    {
       if(v[i]<v[i+1] && k>=0 && k>v[i+1]){
           l++;
           k-=v[i];
           m+=v[i];
       }else {
           break;
       }
       if(k>v[n-1] && v[n-1]>v[n-2] && i==n-1){
             l++;
      
       }
       
    }
    cout<<l<<" "<<m<<" "<<k;

}