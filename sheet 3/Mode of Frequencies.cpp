#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int n;
    int x;
   int  freq[10005]={0};
   int freq2[10005]={0};
    vector<int>v;
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
            freq[x]++;
        }
        for(int i=0;i<10005;i++){
            if(freq[i]!=0)
            freq2[freq[i]]++;
        }
        int max=INT_MIN;
        int mode=0;
         for(int i=0;i<10005;i++){
            if(freq2[i]>max){
                max=freq2[i];
                mode=i;
            }
        }
        cout<<mode<<"\n";
        max=INT_MIN;
        for(int i=0;i<10005;i++){
           freq[i]=0;
           freq2[i]=0;
        }

    }
    
}