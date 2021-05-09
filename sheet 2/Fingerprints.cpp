#include <bits/stdc++.h>
using namespace std;
int main() {
    int freq[20]={0};
    int n,m;
    vector<int>v;
    vector<int>v2;
    cin>>n>>m;
    int x;
     for(int i=0;i<n;i++ ){
         cin>>x;
         v.push_back(x);
         freq[x]++;
     }
     for(int i=0;i<m;i++ ){
         cin>>x;
         v2.push_back(x);
         freq[x]++;
     }
      for(int i=0;i<n;i++ ){
         if(freq[v[i]]==2){
             cout<<v[i]<<" ";
         }
     }
}