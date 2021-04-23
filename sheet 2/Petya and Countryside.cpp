#include <bits/stdc++.h>
using namespace std;
int main() 
{ deque<char>dq;
  int n;
  cin>>n;
  string s;
  cin>>s;
  if(s.size()%2!=0){
  for(int i=0;i<s.size();i++)
  {
      if(i%2==0)
      {
          dq.push_back(s[i]);
      }else
      {
          dq.push_front(s[i]);
      }
  }
  }
  else
  {
        for(int i=0;i<s.size();i++)
  {
      if(i%2==0)
      {   dq.push_front(s[i]);
          
      }else
      {
          dq.push_back(s[i]);
      }
  }






  }
  for(auto a:dq)
  {
      cout<<a;
  }
  cout<<"\n";

}