#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    stack<string>st;
   
    string s;
   bool b=false;
   cin>>n;
   
  
    while (n--)
    {
        cin>>s;
       
        if(s=="Header" || s=="Cell" || s=="Row" || s=="Table" || s=="EndHeader" )
        {
            st.push(s);
         }else
         {
             if( (s=="EndTable" && st.top()=="Table") || (s=="EndCell" && st.top()=="Cell")  || (s=="EndRow" && st.top()=="Row")        )
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
       
       
    
        if(st.size()==2)
        { 
            if(st.top()=="EndHeader"){
                st.pop();
                if(st.top()!="Header"){
                 cout<<"WA"<<"\n";
                 return 0;
                    }

            }else
            {
                cout<<"WA"<<"\n";
                 return 0;
            }
            cout<<"ACC\n";
        }else
        {
            cout<<"WA"<<"\n";
        }

   
    
}