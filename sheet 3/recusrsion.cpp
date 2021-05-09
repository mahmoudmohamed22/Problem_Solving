#include <bits/stdc++.h>
using namespace std;
int rec(int a[],int i){
    if(i==10){
        return 0;
    }
    return a[i]+rec(a,i+1);
}
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    cout<<rec(a,0)<<"\n";
    cout<<findSum(a,10);
}
