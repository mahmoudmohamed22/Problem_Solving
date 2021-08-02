#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    string s,ss;
    queue<char>q;
   for(int i=0;i<s1.size();i++)
   {
       if(s1[i]=='[')
       {    s1[i]=' ';
           int c=i+1;
           while(s1[c]!=']')
           {  
               if(s1[c]!=']' || s1[c]!='['){
               q.push(s1[c]);
               s+=s1[c++];
               }
           }
           s1.erase (i,c-i+1);

       }
   }
   for(int i=0;i<s2.size();i++)
   {
       if(s2[i]=='[')
       {    s2[i]=' ';
           int c=i+1;
           while(s2[c]!=']')
           {  
               if(s2[c]!=']' || s2[c]!='['){
               q.push(s2[c]);
               ss+=s2[c++];
               }
           }
           s2.erase (i,c-i+1);

       }
   }
  
   
   cout<<s+s1<<"\n";
   while (!q.empty())
   {
       cout<<q.front();
       q.pop();
   }
   cout<<"\n";
   cout<<ss<<"\n";
   cout<<s2<<"\n";
    

}