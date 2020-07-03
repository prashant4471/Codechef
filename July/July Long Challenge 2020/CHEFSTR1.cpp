#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,p,k,count=0;
        cin>>n;
        for(long int i=0;i<n;i++){
            cin>>p;
            if(i==0)
            k=p+1;
            count=count+abs(k-p)-1;
            k=p;
        }
        cout<<count<<"\n";
    }
    return 0;
}
