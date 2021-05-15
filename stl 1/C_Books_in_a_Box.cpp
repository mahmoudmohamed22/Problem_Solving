#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,x;
    stack<int>st;
    while (n--)
    {
        cin>>a;
        if(a==1)
        {
         cin>>x;
         st.push(x);
        }else 
        {
            if(a==2)
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else if(a==3)
            {
               if(!st.empty())
                {
                    cout<<st.top()<<"\n";
                }

            }
        }
    }
    
}