#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int main() {
    int n;
    vector<int>v;
    cin>>n;
   int  ar[N];
   long long sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    for(int i=0;i<n;i++){
        if( (sum-ar[i]) == (ar[i]*(n-1)) )
        {
            v.push_back(i+1);
        }
    }
    if(v.size()==0){
        cout<<"0\n";
        return 0;
    }
    cout<<v.size()<<"\n";
   for(auto e:v){
    cout<<e<<" ";
   }
    
    
}