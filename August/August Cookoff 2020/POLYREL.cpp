#include<iostream>
using namespace std;
int main(){
    int v;
    cin>>v;
    while(v--){
       int n,res=0;
       cin>>n;
       long int a[2];
       res=n;
       for(int i=0;i<n;i++)
         cin>>a[0]>>a[1];
      while(1){
         n=n/2;
         if(n>=3)
         res+=n;
         else
         break;
      }
      cout<<res<<"\n";
    }
    return 0;
}
