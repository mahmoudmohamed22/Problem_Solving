
#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int sum(int a[6][6],int x , int y)
{    int Sx= x;
     int  Ex=x+3;
     int Sy=y;
     int Ey=y+3;

    int sum=0;
    for(int i=Sx;i<Ex && Ex<6;i++){
         for(int j=Ey;j<Ey && Ey<6;j++)
         {
            sum=sum+a[i][j];
         }
     }
     sum=sum-a[Sx+1][Sy]-a[Sx+1][Ey];
     v.push_back(sum);
     

return sum;
}
int main() {
     int a[6][6];
     for(int i=0;i<6;i++){
         for(int j=0;j<6;j++)
         {
             cin>>a[i][j];
         }
     }
     
     for(int i=0;i<6;i++){
         for(int j=0;j<6;j++)
         {
             sum(a,i,j);
         }
     }
 int max=INT32_MIN;
       for(int i=0;i<36;i++){
           cout<<v[i]<<"\n";
        /* if(v[i]>max)
         max=v[i];*/
     }
     cout<<max<<"\n";




    return 0;
}