#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c==d){
            if(a==b)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else{
            if(abs(a-b)%abs(c-d)==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
