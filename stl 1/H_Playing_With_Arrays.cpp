#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int n;
    cin>>t;
    deque<int>R;
    deque<int>A;
    while (t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++){
        R.push_back(i);
        }
        for(int i=0;i<n;i++){
           if(!A.empty()){ 
           A.push_front(A.back());
           A.pop_back();}
           if(!R.empty()){
           A.push_front(R.back());
           R.pop_back();}

        }
        
             

        
        for(int i=0;i<n;i++){
            if(i==n-1){
                cout<<A.front();
            A.pop_front();
            }else
             {
            cout<<A.front()<<" ";
            A.pop_front();
            }
        }
        cout<<"\n";

    }
}
    
    
