#include <bits/stdc++.h>
const int  N=3e5+1;
using namespace std;

int main()
{
    int n;
    int x;
    cin>>n;
     int freq[N]={0};
    vector<int>v(n);
    vector<int>v1;
    set<int>s;
    for(int i=0;i<n;i++){
            cin>>x;
        v.push_back(x);
        freq[x]++;
    }
    for(int i=0;i<N;i++){
        if(freq[i]>2){
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0;i<N;i++){
        if(freq[i]>1){
            v1.push_back(i);

        }
        if(freq[i]!=0){
            s.insert(i);
        }

    }

    cout<<"YES"<<"\n";

    cout<<s.size()<<"\n";

    for(auto vv:s){
        cout<<vv<<" " ;
    }
    cout<<"\n";
    sort(v1.begin(), v1.end(), greater<int>());
    cout<<v1.size()<<"\n";
       for(auto cc:v1){
        cout<<cc<<" ";
    }







    return 0;
}
