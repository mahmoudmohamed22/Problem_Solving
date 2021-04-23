#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
           }
           int s=0,d=0;
           int l=0,r=n-1;
           bool b=1;
           while(l<r){
               if(v[r]>v[l] && b){
                   s+=v[r];
                   b=0;
                   r--;

               }else if(v[r]<v[l] && b){
                   s+=v[l];
                   b=0;
                   l++;
               }

              if(v[r]>v[l] && !b){
                   d+=v[r];
                   r--;
                   b=1;
               }else if(v[r]<v[l] && !b){
                   d+=v[l];
                   l++;
                   b=1;
               }
            


           }
           if(l==r && b){
               s+=v[l];
           }else {
               d+=v[l];
           }
           cout<<s<<" "<<d<<"\n";
    
}