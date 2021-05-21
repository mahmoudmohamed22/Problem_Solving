#include <bits/stdc++.h>
using namespace std;
int main() 
{   
    
   string s;
   cin>>s;
   stack<char>st;
   st.push(s[0]);
   for(int i=1;i<s.size();i++)
   {    
       
       if(st.empty())
       {
st.push(s[i]);
       }else {
             if(st.top()==s[i])
       {
           if(!st.empty())
           st.pop();
       }else 
       {
           st.push(s[i]);
       }
       }

   }
   if(st.size()==0)
   {
       cout<<"Yes\n";
   }else
   {
       cout<<"No\n";
   }
        

    
}