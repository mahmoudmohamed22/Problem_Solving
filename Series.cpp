#include <bits/stdc++.h>

using namespace std;
int rec(int N){
    if(N==1){
        return 1;
    }

    if(N%2==0){
     return 1+rec(N/2);
    }else{
     return 1+rec(3*N+1);
    }

}
int main()
{
    int N;
    cin>>N;
    cout<<rec(N);
    return 0;
}
