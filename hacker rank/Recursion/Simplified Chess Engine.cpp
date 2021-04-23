#include <bits/stdc++.h>
#define fastcin ios_base::sync_with_stdio(false)\
                            ;cin.tie(NULL) 
using namespace std;
int superDigit(string s, int k) {
    if(s.size()==1)
    {
        return stoi(s);
    }
    long long  sum=0;
for(auto x:s){
sum+=(x-48);
}
long long  f=k*sum;
 return superDigit(to_string(f),1);

}

int main()
{
    string  s;
    int k;
    cin>>s>>k;
    
    cout<<superDigit(s,k)<<"\n";
  
    return 0;
}

