#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    long int t;
    cin>>t;
    while(t--){
        long long int n,q;
        cin>>n>>q;
        long long int d=1,m,p,r;
        for(long long int i=0;i<n;i++){
            cin>>m;
            if(d<1000000000)
            d*=m;
        }
        for(long long int i=0;i<q;i++){
            cin>>p;
            r=p/d;
            cout<<r<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
