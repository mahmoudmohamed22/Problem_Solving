#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
   stack<int>st;
   queue<int>q;
   int x;
   for(int i=1;i<=n;i++)
   {
       cin>>x;
       st.push(i);
       q.push(x);
       while (st.size() || q.size())
  {
      if(st.top()==q.front())
      {   if(!st.empty())
          st.pop();
          if(!q.empty())
           q.pop();
      }else
      {
          break;
      }
  }
   }
  while (st.size() || q.size())
  {
      if(st.top()==q.front())
      {   if(!st.empty())
          st.pop();
          if(!q.empty())
           q.pop();
      }else
      {
          break;
      }
  }
  if(st.size()==0)
  {
      cout<<"YES";
  }else
  {
      cout<<"NO";
  }
  
   

   
    
}