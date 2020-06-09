#include<iostream>
using namespace std;
void guess(long int l,long int r,long int x,long int a,long int b,long int c,int flag){
       if(flag==0){
           if(l<=r){
               cout<<x<<"\n";
               char ch;
               cin>>ch;
               if(ch=='G'){
                   l=x+1;
                   x=(l+r)/2;
                   flag=1;
                   guess(l,r,x,a,b,c,flag);
               }
               else if(ch=='L'){
                   r=x-1;
                   x=(l+r)/2;
                   flag=1;
                   guess(l,r,x,a,b,c,flag);
               }
               else{ 
                   flag=2;
                   guess(l,r,x,a,b,c,flag);
               }
           }
       }
       else if(flag==1){
           if(a<=b){
               cout<<c<<"\n";
               char ch;
               cin>>ch;
               if(ch=='G'){
                   a=c+1;
                   c=(a+b)/2;
                   flag=0;
                   guess(l,r,x,a,b,c,flag);
               }
               else if(ch=='L'){
                   b=c-1;
                   c=(a+b)/2;
                   flag=0;
                   guess(l,r,x,a,b,c,flag);
               }
               else{
                   flag=2;
                   guess(l,r,x,a,b,c,flag);
               } 
           }
       }
       else
       return;
 }
int main(){
    long int n;
    cin>>n;
    long int l,r,x,a,b,c;
    int flag=0;
    l=1;
    r=n;
    x=(l+r)/2;
    a=l;
    b=r;
    c=x;
    guess(l,r,x,a,b,c,flag);
    return 0;
}
