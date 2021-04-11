
#include <bits/stdc++.h>
using namespace std;
int main() 
{
   string s[9]={"one","two","three","four","five","six","seven","eight","nine"};
   int x,y;
   cin>>x>>y;
   if(x>1 && x<10){
   for(int i=x-2;i<8;i++)
   {
       cout<<s[i+1]<<"\n";
   }

   for(int i=10;i<=y;i++)
   {
       if(i%2==0){
           cout<<"even"<<"\n";
       }else 
       {
           cout<<"odd"<<"\n";
       }
   }
   }else 
   {
       for(int i=x;i<=y;i++)
   {
       if(i%2==0){
           cout<<"even"<<"\n";
       }else 
       {
           cout<<"odd"<<"\n";
       }
   }
   }

    return 0;
}