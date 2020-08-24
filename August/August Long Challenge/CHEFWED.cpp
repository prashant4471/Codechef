#include<bits/stdc++.h>
using namespace std;
int fa[1001][1001] = {0};
long long int calculate(int s,int e,long long int f[],int k){
    if(s==e){
        return k;
    }
    int fam[101] = {0};
    long long int res = k;
    for(int i=s;i<=e;i++){
       fam[f[i]]++;
    }
    for(int i=0;i<=100;i++){
        if(fam[i]>1){
            res+=fam[i];
        }
    }
    return res;
}
long long int func(int s,int e,long long int f[],int k){
    if(s>e){
        return 0;
    }
    if(s==e){
        return k;
    }
    if(fa[s][e]!=0){
        return fa[s][e];
    }
    long long int fres = INT_MAX;

    for(int i=s;i<=e;i++){
        fres = min(fres,calculate(s,i,f,k) + func(i+1,e,f,k));
    }
    fa[s][e] = fres;
    return fa[s][e];
}

int main() {
    long long int t;
    cin>>t;
    while(t--){
       long long int n,k;
       cin>>n>>k;
       long long int f[n];
       long long int res = k;
       int fam[101] = {0};
       for(int i=0;i<1001;i++){
           for(int j=0;j<1001;j++){
               fa[i][j] = 0;
           }
       }
       for(int i=0;i<n;i++){
           cin>>f[i];
       }
       cout<<func(0,n-1,f,k)<<endl;
    }
  return 0;
}
