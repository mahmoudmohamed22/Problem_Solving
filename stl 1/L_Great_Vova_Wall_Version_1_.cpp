#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int>st;
    int n;
    cin>>n;
    int x;
     while(n--)
     {
         cin>>x;
         if(st.empty())
         {
             st.push(x);
         }else
         {
             if(st.top()%2==0 && x%2==0)
             {
                 if(!st.empty())
                 st.pop();
             }else if(st.top()%2!=0 && x%2!=0)
             {
                 if(!st.empty())
                 st.pop();
             }else
             {
                 st.push(x);
             }
         }

     }
     if(st.size()>1)
     {
         cout<<"NO\n";
     }else
     {
         cout<<"YES\n";
     }

}