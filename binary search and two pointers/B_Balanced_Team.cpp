#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int ar[N];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans=INT_MIN;
    sort(ar,ar+n);
   
    int p2=0;
    for(int p1=0;p1<n;p1++){
        while (ar[p1]-ar[p2]>5)
        {
            p2++;
            
        }
        ans=max(p1-p2+1,ans);
      
        
    }
    cout<<ans<<"\n";
    
}