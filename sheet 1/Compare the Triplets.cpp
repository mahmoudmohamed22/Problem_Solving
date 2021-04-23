
#include <bits/stdc++.h>
using namespace std;
int N=1e5+100;
int main()
 {    
     int a[105];
     int b[105];
     int aa=0,bb=0;
     for(int i=0;i<3;i++){
         cin>>a[i];
     }
     for(int i=0;i<3;i++){
         cin>>b[i];
     }
    for(int i=0;i<3;i++){
         if(a[i]>b[i])
         aa++;
         else if (b[i]>a[i])
         bb++;
     }
     cout<<aa<<" "<<bb<<"\n";

    return 0;
}