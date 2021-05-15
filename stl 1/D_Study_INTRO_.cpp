#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    stack<string>st;
    stack<string>st2;
    string s;
   bool b=false;
   cin>>n;
   int nn=n;
   cin>>s;
   st2.push(s);
   n--;
    while (n--)
    {
        cin>>s;
        if(n==0)
        {   if(!st2.empty() && s=="EndHeader"){
            st2.pop();
            continue;
            }else 
            {
                cout<<"WA";
                return 0;
            }
        }
        if(s=="Header" || s=="Cell" || s=="Row" || s=="Table")
        {
            st.push(s);
         }else
         {
             if( (s=="EndTable" && st.top()=="Table") ||  (s=="EndHeader" && st.top()=="Header") ||  (s=="EndCell" && st.top()=="Cell")  || (s=="EndRow" && st.top()=="Row")        )
             {
                 if(!st.empty())
                 {    
                     st.pop();
                  }else {
                      cout<<"WA"<<"\n";
                      return 0;
                    //  b=true;
                  }
             }else 
             {   cout<<"WA"<<"\n";
                 return 0;
                 //b=true;
             }
         }
         
        
    }

    
    
        if(st.size()==0 && st2.size()==0)
        {
            cout<<"ACC\n";
        }else
        {
            cout<<"WA"<<"\n";
        }

   
    
}