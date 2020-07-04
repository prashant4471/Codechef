#include <bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,i,p,count=0;
        cin>>n;
        unordered_map<long int,long int> a;
        unordered_map<long int,long int> b;
        vector<long int> c;
        vector<long int> d;
        for(i=0;i<n;i++){
            cin>>p;
            a[p]++;
        }
        for(i=0;i<n;i++){
            cin>>p;
            if(a[p]>=1)
            a[p]--;
            else
            b[p]++;
        }
        for (auto it = a.begin(); it != a.end(); )
{
    if (it->second == 0) { d.push_back(it->first);a.erase(it++); }
    else                      { ++it;          }
}
        for (auto it = b.begin(); it != b.end(); )
{
    if (it->second == 0) { d.push_back(it->first);b.erase(it++); }
    else                      { ++it;          }
}
        if(a.empty())
        cout<<"0"<<"\n";
        else{
        int flag=0;
        for(auto it: a){
            if(it.second%2==1){
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(auto it: b){
                if(it.second%2==1){
                    flag==1;
                    break;
                }
            }
            if(flag==1)
            cout<<"-1"<<"\n";
        }
        else
        cout<<"-1"<<"\n";
        if(flag==0){
            for(auto it: a){
                i=0;
                while(i<((it.second)/2)){
                     c.push_back(it.first);
                     i++;
                }
            }
            for(auto it: b){
                i=0;
                while(i<((it.second)/2)){
                     c.push_back(it.first);
                     i++;
                }
            }
            sort(c.begin(),c.end());
            sort(d.begin(),d.end());
            long int y=d.front();
            long int d=c.size();
            long int x=c.front();
            for(auto it: c){
                if(it==x)
                count++;
                else
                break;
            }
            i=0;
            long int z=0;
            for(auto it: c){
                if(i<(d/2)){
                    z+=it;
                    i++;
                }
                else
                break;
            }
            long int o=y*d;
            if(o>(x*(d-count)))
            o=(x*(d-count));
            if(o>z)
            o=z;
            cout<<o<<"\n";
        }
      }
    }
    return 0;
}
