#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int x;
    int up=0;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==1 || x==3)
            {
up++;
            }
        }
        cout<<up<<"\n";
       
up=0;

    }
}