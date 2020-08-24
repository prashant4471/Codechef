#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k,x,y,j,h,o;
      cin>>n>>k;
      string s;
      map<int,int>a;
      cin>>s;
      for(int i=0;i<n;i++){
         a[s[i]]++;
      }
      x=a['0'];
      y=a['1'];
      if(x==0 || y==0){
         cout<<s<<"\n";
      }
      else if(k==1){
         for(int i=0;i<x;i++)
         cout<<"0";
         for(int i=0;i<y;i++)
         cout<<"1";
         cout<<"\n";
      }
      
      else{
          h=gcd(x,y);
          x=x/h;
          y=y/h;
          if(k%(x+y)!=0)
            cout<<"IMPOSSIBLE"<<"\n";
      else{
         o=k/(x+y);
         x=x*o;
         y=y*o;
         j=n/k;
         string r="";
         for(int i=0;i<x;i++){
            r+='0';
         }
         for(int i=0;i<y;i++){
            r+='1';
         }
         for(int i=0;i<j;i++){
            cout<<r;
            reverse(r.begin(),r.end());
         }
         cout<<"\n";
       }
      }
   }
   return 0;
}
