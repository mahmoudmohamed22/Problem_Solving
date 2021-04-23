#include <bits/stdc++.h>
using namespace std;
int main() {
  long  n,k;
   cin>>n>>k;
   long  mid;
   
       mid=n/2;
   if(n%2!=0){
       mid=(n/2)+1;
   }
   if(k<=mid)
   {cout<<(k-1)*2+1;
       
   }else{
       cout<<(k-mid)*2;
   }
   cout<<"\n";
    
}