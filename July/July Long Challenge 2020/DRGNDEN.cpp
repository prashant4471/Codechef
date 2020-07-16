#include<bits/stdc++.h>
#include<unordered_map>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    unordered_map<long int,long int>a,b;
    map<long int,long int,greater<long int>>d;
    std::vector<long int>c;
    long int n,q,i,j,m,y,z,sum,k;
    int x;
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>m;
        a[i+1]=m;
    }
    for(i=0;i<n;i++){
        cin>>m;
        b[i+1]=m;
    }
    for(j=0;j<q;j++){
        cin>>x>>y>>z;
        sum=0;
        if(x==1){
            b[y]=z;
        }
        else{
            if(y<z){
                for(i=y;i<=z;i++){
                    d[a[i]]=i;
                    c.push_back(a[i]);
                }
                sort(c.begin(),c.end());
                reverse(c.begin(),c.end());
                if(c[1]==a[y] || c[0]>a[y])
                cout<<"-1\n";
                else{
                    // c.erase(std::unique(c.begin(),c.end()),c.end());
                    m=y-1;
                    for(auto it: d){
                        if(it.second>m){
                            sum+=b[it.second];
                            m=it.second;
                            if(m==z)
                            break;
                        }
                    }
                    cout<<sum<<"\n";
                }
            }
            else if(z<y){
                for(i=y;i>=z;i--){
                    d[a[i]]=i;
                    c.push_back(a[i]);
                }
                sort(c.begin(),c.end());
                reverse(c.begin(),c.end());
                if(c[1]==a[y] || c[0]>a[y])
                cout<<"-1\n";
                else{
                    // c.erase(std::unique(c.begin(),c.end()),c.end());
                    m=y+1;
                    for(auto it: d){
                        if(it.second<m){
                            sum+=b[it.second];
                            m=it.second;
                            if(m==z)
                            break;
                        }
                    }
                    cout<<sum<<"\n";
                }
            }
            else{
                cout<<b[y]<<"\n";
            }
        }
        c.clear();
        d.clear();
    }
    return 0;
}
