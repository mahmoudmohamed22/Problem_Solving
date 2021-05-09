#include <bits/stdc++.h>
using namespace std;
int dp (int i,int j,int cost,int x,int y)
{
   
if(i==x && y==j){
    return cost;
}

return dp(i,j+1,cost+i,x,y);
return dp(i+1,j,cost+j,x,y);

}
int main() {
    cout<<dp(0,0,0,2,2)<<"\n";
    /*int t;
    cin>>t;
    int n,m,k;
    while (t--)
    {
        cin>>n>>m>>k;
        
        
    }*/
    
}