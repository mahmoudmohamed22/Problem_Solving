#include <bits/stdc++.h>
using namespace std;
const int N=250;
const int mm=55;
int ar[N];
int n,m;
int mem[mm][N];
int dp(int ar[],int n,int m )
{  
  
   if(n==0)
   {
       mem[m][n]=1;

   }
   if(m<=0){
       return 0;
   }
    if(mem[m][n]!=-1)
    {
      return  mem[m][n] ;
    }
     if(ar[m-1]<=n){
   return mem[m][n]=dp(ar,n-ar[m-1],m)+dp(ar,n,m-1);
     }
   else {
      return mem[m][n]=dp(ar,n,m-1);}
  

}


int main() {
    memset(mem, -1, sizeof(mem));
    cin>>n>>m;

    for(int i=0;i<m;i++)
    cin>>ar[i];

    sort(ar,ar+m);

cout<<dp(ar,n,m);
    



}