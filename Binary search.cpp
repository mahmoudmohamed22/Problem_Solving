#include <bits/stdc++.h>

using namespace std;
 int arr[1000000];
 int rec(int arr[],int l ,int h,int k){
 if(l>h)
 {
 return -1;
 }
  int mid=(h+l)/2;
  if(arr[mid]==k){
    return mid+1;
  }
else if(arr[mid]>k){
  rec(arr,l,mid-1,k);}
  else if(arr[mid]<k){
 rec(arr,mid+1,h,k);}
 }
int main()
{    int t;
    int x;
    int N;
    cin>>N;
for(int i=0;i<N;i++) { cin>>arr[i];}
cin>>t;
while(t--)
{
    cin>>x;
    cout<<rec(arr,0,N-1,x)<<"\n";

}




    return 0;
}
