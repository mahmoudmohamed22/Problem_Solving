#include <bits/stdc++.h>
using namespace std;
int  freq[100005]={0,0};
int  f[100005]={0,0};
bool vist[100005]={0};
set<int>st;
int main() {
   int t,n;
    bool b=false;
   vector<int>v;
   cin>>t;
   
  

   while(t--)
   {   int x=0;
       cin>>n;
       for(int i=0;i<n;i++){
         cin>>x;
         v.push_back(x);
         freq[x]++;
         if(!vist[x]) vist[x]=1;
         else { 
             b=true;
         }

       }
       for(int i=0;i<1005;i++){
        f[freq[i]]++;
        
     } 
    
       
     for(int i=1;i<1005;i++){
         if(f[i]>1 || b){
             cout<<"NO"<<"\n";
             b=true;
             break;
         }
     }
     
     if(!b){
         cout<<"YES"<<"\n";
         b=0;
     }
     b=0;
     
     for(int i=0;i<1005;i++){
         freq[i]=0;
         f[i]=0;
         vist[i]=0;
     }
       v.clear();

   }

   




return 0;

}