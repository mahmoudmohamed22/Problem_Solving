#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    long long  AB, DB, EC,AD;
        while (t--)
    {
        cin>>AB>>DB>>EC;
        AD=AB-DB;
    printf("%lf\n",double(EC*AD)/(AB-AD));
        
    }
    
}