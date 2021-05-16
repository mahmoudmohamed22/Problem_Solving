#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int main() {
    vector<int>a;
     vector<int>b;
     vector<int>v;
     int x,y;
     cin>>x>>y;
     int z;
     for(int i=0;i<x;i++)
     {    
         cin>>z;
         a.push_back(z);
              }
     for(int i=0;i<y;i++)
     {
          cin>>z;
         b.push_back(z);
     }
     sort(a.begin(),a.end());
   //  sort(b.begin(),b.end());
      int ans=0;
     for(int i=0;i<y;i++)
     {  
        /*  int mid;
 
   
    int low = 0;
    int high = y;
 
    
    while (low < high) {
        mid = low + (high - low) / 2;
 
        if (b[i]<a[mid]) {
            high = mid;
        }
 
        else {
            low = mid + 1;
        }
    }
     */
    /*
    auto l=lower_bound(a.begin(), a.end(), b[i]);
    ans=l- v.begin();*/
     int mid;
 
  
    int low = 0;
    int high = x;
 
    
    while (low < high) {
       
        mid = low + (high - low) / 2;
 
        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if (b[i]>= a[mid]) {
            low = mid + 1;
        }
 
        // If X is less than arr[mid]
        // then find in left subarray
        else {
            high = mid;
        }
    }
    



            
        
        v.push_back(low);
        
        




     }
     for(auto m:v)
     {
         cout<<m<<" ";
     }

     
    
}