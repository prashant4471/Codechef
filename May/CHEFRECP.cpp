#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[1001]={0},c[1001]={0},flag=0,d[1001]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        
        for(int i=0;i<1001;i++){
            if(b[i]>0)
            c[b[i]]++;
        }
        for(int i:c){
            if(i>1){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO \n";
        }
        else{

            d[a[0]]=1;
            int i=0;
            for(i=1;i<n;i++){
                if(a[i]==a[i-1])
                continue;
                else{
                if(d[a[i]]==1)
                break;
                else{
                d[a[i]]=1;
                }
                }
            }
            if(i==n){
            cout<<"YES \n";
            }
            else{
            cout<<"NO \n";
            }
        }
    }
    return 0;
}
