#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=0,m;
        for(int i=0;i<n;i++){
            cin>>m;
            if(m>k){
                sum+=(m-k);
            }
        }
        cout<<sum<<"\n";
    }
}
