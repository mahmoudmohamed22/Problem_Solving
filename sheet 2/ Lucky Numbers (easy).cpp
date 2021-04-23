#include <bits/stdc++.h>

using namespace std;
vector<long long>v;
void rec(long long value ,int n4,int n7){
if(value > 100000000000ll ) return ;
if(n4==n7) v.push_back(value);
rec(value*10+4,n4+1,n7);
rec(value*10+7,n4,n7+1);
}
int main() {
    long long  x;
    cin>>x;
    rec(0,0,0);
    sort(v.begin(),v.end());
    
     int	u = 0;
	for (; v[u] < x; ++ u);
	cout << v[u] << endl;

}