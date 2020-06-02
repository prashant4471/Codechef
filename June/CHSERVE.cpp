#include<iostream>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n,m,k,l;
        cin>>n>>m>>k;
        l=2*k;
        if((n+m)%l<k)
        cout<<"CHEF\n";
        else
        cout<<"COOK\n";
    }
    return 0;
}
