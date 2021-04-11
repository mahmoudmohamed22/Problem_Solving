
#include <bits/stdc++.h>
using namespace std;
int N=1e5+100;
int main()
 {    int a[1000][1000]={0};
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++)
          {
              cin>>a[i][j];
          }
      }
     int sum1=0,sum2=0;
      for(int i=0;i<n;i++){
          
                  sum1+=a[i][i];
              
          
      }
       for(int i=0;i<n;i++){
          
        
          sum2+=a[i][n-i-1];
          
      }

cout<<abs(sum1-sum2)<<"\n";






    return 0;
}