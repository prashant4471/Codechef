#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,q,m;
        vector<long int>a;
        map<long int,long int>c;
        cin>>n;
        long int b[n];
        for(long int i=0;i<n;i++){
            cin>>b[i];
            a.push_back(b[i]);
            c[b[i]]=1;
        }
        cin>>q;
        long int x,y,z,k;
        for(long int i=0;i<q;i++){
            cin>>x>>y;
            z=x+y;
            if(z==0){
                cout<<"0\n";
            }
            else if(c[z])
            cout<<"-1\n";
            else{
               k=std::lower_bound(a.begin(),a.end(),z)-a.begin();
               cout<<k<<"\n";
            } 
        }
    }
    return 0;
}
