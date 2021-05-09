#include <bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
int vist[100001];
int dis[100001];
int color[100001];
int n,m;
 int a,b;
 void adjlist(int a,int b){
 for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
 }
void dfs(int node)
{
    vist[node]=1;
    for(int child :ar[node]){
        if(vist[child]==0){
            dfs(child);
        }
    }
}
 int c=0;
void connectedcomponemts(){
  for(int i=1;i<=n;i++){
   if(!vist[i]){
       dfs(i);
       c++;
   }
    }
}
int sssp(int node,int d){
    vist[node]=1;
    dis[node]=d;
    for(int child:ar[node])
    {
        if(!vist[child]){
            sssp(child,dis[child]+1);
        }
    }

}
bool Bipartite(int node ,int c){
    vist[node]=1;
    color[node]=c;
    for(auto child:ar[node]){
        if(vist[child]==0){
            if(Bipartite(child,c^1)==false){
                return false;
            }
        }else{
            if(color[node]==color[child]){
                return false;
            }
        }
    }
    return true;
}
bool cycleDetection(int node ,int par){
    vist[node]=1;
    for(int child:ar[node]){
        if(vist[child]==0){
            if(cycleDetection(child,node)==true){
               return true;
            }

        }else {
            if(child!=par){
                return true;
            }
        }
    }
    return false;
}
int main() {
    
    cin>>n>>m;
   
   
   
  
    cout<<c<<"\n";
    
}