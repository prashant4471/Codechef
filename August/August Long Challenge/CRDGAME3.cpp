#include<iostream>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int c,r;
        cin>>c>>r;
        long int c1,r1;
        c1=c/9;
        if(c%9)
        c1++;
        r1=r/9;
        if(r%9)
        r1++;
        if(c1<r1)
        cout<<"0 "<<c1<<"\n";
        else
        cout<<"1 "<<r1<<"\n";
    }
    return 0;
}
