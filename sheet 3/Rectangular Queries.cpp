#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int x1,y1,x2,y2;
    set<int>st;
    int a[305][305]={0};
    int b[305][305]={0};
    int c[305][305]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
          

            if(st.count(a[i][j])){ b[i][j]=0;}
            else { b[i][j]=1;
            
             
            }
             st.insert(a[i][j]);
        }

    }
     for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++)
           c[i][j] = c[i - 1][j] + c[i][j - 1] - c[i - 1][j - 1] + b[i][j];
    }
    int q;
     
   cin>>q;
    bool bb=false;
    while(q--){
        cin>>x1>>y1>>x2>>y2;
        cout<<"\n";
      
    
        cout<<c[x2-1][y2-1]+c[x1-1][y1-1]-c[x1-1][y2-1]-c[x2-1][y1-1]<<"\n";
        
    }
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++)
           cout<<b[i][j]<<" ";
           cout<<"\n";
    }

    
      
}