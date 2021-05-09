#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>va;
    vector<int>vb;
    set<int>st;
    int na,nb;
    int n,k;
    cin>>na>>nb;
    cin>>n>>k;
    int x;
    for(int i=0;i<na;i++){
       cin>>x;
        va.push_back(x);

    }
     for(int i=0;i<nb;i++){
          cin>>x;
        vb.push_back(x);
    }
    int in;
     for(int i=0;i<n;i++){
        st.insert(va[i]);
        in=va[i];
    }
     for(int i=0;i<k;i++){
       if(st.count(vb[i]) && in>=vb[i]){
      cout<<"NO";
      return 0;
       }  
         }
         cout<<"YES";


}