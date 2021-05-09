#include <bits/stdc++.h>
using namespace std;
int main() {
    int freq[100]={0};
    int n;
    string s;
    cin>>n;
    cin>>s;
    if(n==1){
        cout<<"Yes";
        return 0;
    }else{
        for(auto a:s){
             freq[a-97]++;
        }
        for(int i=0;i<100;i++){
            if(freq[i]>1){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"NO";
}