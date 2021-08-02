#include <bits/stdc++.h>
using namespace std;
int main() {
    double x,y,z,w;
    cin>>x>>y>>z>>w;
    int diff1,diff2,diff3;
    double ratio1,ratio2,ratio3;
    double res;

    if(x<=y && y<=z)
    {
        ratio1=y/x; // y/x == z/y ==w/z
        diff1=y-x;
         ratio2=z/y;
        diff2=z-y;
        diff3=w-z;
        
        if(diff1==diff2 && diff2==diff3)
        {
         cout<<x+4*diff1<<"\n";    
        }
        else if(y*y==z*x && z*z==w*y && (long long)(x*pow(ratio2,4))==x*pow(ratio2,4))
        {
           cout<<x*pow(ratio2,4)<<"\n";
        }else
        {
            cout<<"42\n";
        }
        

    }else if(x>y && y>z)
    {   double po;
        ratio1=x/y; //x/y == y/z ==z/w
        diff1=x-y;
         ratio2=y/z;
        diff2=y-z;
        diff3=z-w;
        if(diff1==diff2 && diff2==diff3)
        {
         cout<<(x-(4*diff1))<<"\n";    
        }
       else if(y*y==z*x && z*z==w*y && (long long)(x*pow(ratio2,4))==x*pow(ratio2,4))
        { 
            po=pow(ratio2,-4.0);
            res=x*po;
            res<1?cout<<"42":cout<<res<<"\n";
            
           
        }
         else
        {
            cout<<"42\n";
        }

    }else
    {
        cout<<"42\n";
    }
}