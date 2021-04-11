#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   int a[1000005]={0};
   float pe=0;
   float ne=0;
   float zero=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]>0)
       pe++;
       else if(a[i]<0)
       ne++;
       else
       zero++;

   }
   printf("%lf\n",pe/n);
    printf("%lf\n",ne/n);
     printf("%lf\n",zero/n);

    return 0;
}