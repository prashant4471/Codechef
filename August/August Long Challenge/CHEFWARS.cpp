#include<iostream>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int h,p;
        cin>>h>>p;
        if(p>=h)
        cout<<"1\n";
        else{
            float i=h/p;
            if(i<2)
            cout<<"1\n";
            else
            cout<<"0\n";
        }
    }
    return 0;
}
