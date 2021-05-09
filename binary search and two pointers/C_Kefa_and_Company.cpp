#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int main() {
    int n,d;
    cin>>n>>d;
    int x,y;
   
       vector<pair<int,int>>v;
       for(int i=0;i<n;i++)
       {
           cin>>x>>y;
           v.push_back(make_pair(x,y));
       }
       sort(v.begin(),v.end());
       long long ans=LONG_MIN;
      long long sum=0;
       int p2=0;
       int p1=0;
       for(;p2<n;)
       {
           if(abs(v[p1].first-v[p2].first)<d){
               sum+=v[p2].second;
               p2++;
               if(sum>ans)ans=sum;
               else ans=ans;
            
           }else
           {
               sum-=v[p1].second;
p1++;
  if(sum>ans)ans=sum;
               else ans=ans;

           }
          
       }
       cout<<ans<<"\n";
    
}