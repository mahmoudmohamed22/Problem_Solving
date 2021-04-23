#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   long a[5000];
   int sum=0;
   for(int i=0;i<n;i++){
   cin>>a[i];
   sum+=a[i];
   }
   cout<<sum<<"\n";
    return 0;
}