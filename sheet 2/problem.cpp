#include <bits/stdc++.h>
using namespace std;
int main() {
    int l,r;
    cin>>l>>r;
    int c=0;
    for(int i=l+1;i<r;i++){
        for(int j=0;j<32;j++){
            int a=i & (1<<j);
            if(i>>a==1){
     c++;
            }
        }
        if(c%2!=0){
            cout<<i;
            break;
        }
        c=0;
    }
}