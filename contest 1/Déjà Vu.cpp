#include <bits/stdc++.h>
using namespace std;
#define fastCin ios::sync_with_stdio(false)

int main() 
{
    fastCin;
    int n;
    cin>>n;
    string s;
    while(n--)
    { 
        cin>>s;
        int l=0;int r=s.size()-1;
        bool b=1;
        while(l<=r)
        {
            if(s[r]!='a'){
                cout<<"YES"<<"\n";
                cout<<'a'<<s<<"\n";
                b=0;
                break;
            }
            if(s[l]!='a')
            {
                cout<<"YES"<<"\n";
                cout<<s<<'a'<<"\n";
                b=0;
                break;
            }
            l++;r--;
         
        }
        if(b)  cout<<"NO"<<"\n";
       

         





    }
    


    return 0;
}

