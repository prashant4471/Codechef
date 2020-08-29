#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,max=0;
        cin>>n;
        map<int,int>a,d;
        vector<int>b;
        for(int i=0;i<n;i++){
            cin>>m;
            a[m]++;
        }
        for(auto it:a){
            d[it.second]++;
        }
        for(auto it:d){
            if(it.second>max){
              max=it.second;
            } 
        }
        for(auto it:d){
            if(it.second==max){
               b.push_back(it.first);
            }
        }
        sort(b.begin(),b.end());
        cout<<b.front()<<"\n";
    }
    return 0;
}
