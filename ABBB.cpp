#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    stack<char>st;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;

     for(int i=0;i<s.size();i++)
        {  if(st.size()==0)
           {
               st.push(s[i]);
               continue;
           }
          if((st.top()=='A' && s[i]=='B') || (st.top()=='B' && s[i]=='B') ){
            st.pop();
          }else{
          st.push(s[i]);
          }
        }
cout<<st.size()<<"\n";
while(!st.empty())
    st.pop();

    }





    return 0;
}
