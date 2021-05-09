
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    vector<int>v2;
    deque<int>dq;
    int n1,n2,x;
    cin>>n1>>n2;
     
    for(int i=0;i<n1;i++){
        cin>>x;
        dq.push_back(x);
    }
    for(int i=0;i<n2;i++){
        cin>>x;
        v2.push_back(x);
    }

    for(int i=0;i<v2.size();i++)
    {
        for(int j=0;j<n1;j++ )
        {
            if(v2[i]==dq[j]){
                v.push_back(j+1);
               dq.erase (dq.begin()+j);
                dq.push_front(v2[i]);
                break;
                            }
        }
    }
    for(auto a:v){
        cout<<a<<" ";
    }
     
     
 




 
    return 0;
}
