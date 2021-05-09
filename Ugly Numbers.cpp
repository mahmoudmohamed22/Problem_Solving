#include <bits/stdc++.h>
using namespace std;
int countEvenOdd(int n)
{
    int even_count = 0;
    int odd_count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
            even_count++;
        else
            odd_count++;
        n = n / 10;
    }
  
    if (even_count % 2 == 0 &&
        odd_count % 2 != 0)
        return 1;
    else
        return 0;
}
int main() {
    int l,r;
    cin>>l>>r;
    int c=0;
    for(int i=l+1;i<r;i++){
       if(countEvenOdd(i)==0){
           cout<<i<<" ";
           break;
       }
    }
}