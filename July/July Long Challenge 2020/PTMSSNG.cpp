#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,i;
        cin>>n;
        long int p,q;
        unordered_map<long int,long int> f1;
        unordered_map<long int,long int> f2;
        for(i=0;i<(4*n-1);i++){
            cin>>p>>q;
            f1[p]++;
            f2[q]++;
            if(f1[p]==2)
            f1.erase(p);
            if(f2[q]==2)
            f2.erase(q);
        }
        cout<<f1.begin()->first<<" "<<f2.begin()->first<<"\n";
    }
    return 0;
}
