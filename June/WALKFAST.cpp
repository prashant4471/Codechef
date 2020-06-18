#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num,a,b,c,d,p,q,v;
        cin>>num>>a>>b>>c>>d>>p>>q>>v;
        int arr[num];
        for(int i=0;i<num;i++)
          cin>>arr[i];
        int t1,t2,flag=0;
        t1=abs(arr[b-1]-arr[a-1])*p;
        t2=abs(arr[c-1]-arr[a-1])*p;
        if(t2<=v){
          flag=1;
          t2=v+abs(arr[d-1]-arr[c-1])*q+abs(arr[d-1]-arr[b-1])*p;
        }
        if(flag==0)
        cout<<t1<<"\n";
        else{
          if(t1<t2)
          cout<<t1<<"\n";
          else
          cout<<t2<<"\n";
        }
    }
    return 0;
}
