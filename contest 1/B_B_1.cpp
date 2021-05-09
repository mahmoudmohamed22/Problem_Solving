#include <bits/stdc++.h>
using namespace std;
long long sum(long long num)
{
    return num*(num+1)/2;
}
long long sumT(long long l,long long r){
    long long s=0;
    if(l<=r){
       s=sum(r)-sum(l-1);
    }
    return s;
}

int main() {
    bool b=false;
    long long n,k;
    cin>>n>>k;
  
   
    if(k>=n){
        cout<<"1";
    }else if (n==1)
    {
        cout<<"0";
    }else{
         k=k-1;
         n=n-1;
         long long l=1,r=k;
        if(sum(k)<n)
        {
            cout<<"-1";
        }  else {
            
                    while (l<r)
                    {
                    int mid=(l+r)/2;
                    long long ss=sumT(mid,r);
     if(ss==n){
         b=true;
         return k-mid+1;
     }else if (ss>n){
         l=mid+1;
     }else {
         r=mid;
     }

                    }
        
    }
    }
   
    
   


    
}