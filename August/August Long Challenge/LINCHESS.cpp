#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,k,m,count=0,temp,flag=1,res;
        cin>>n>>k;
        for(long int i=0;i<n;i++){
            cin>>m;
            if(k%m==0){
                temp=k/m;
                if(flag){
                    count=temp;
                    res=m;
                    flag=0;
                }
                else if(temp<count){
                    count=temp;
                    res=m;
                }
            }
        }
        if(count)
        cout<<res<<"\n";
        else
        cout<<"-1\n";
    }
    return 0;
}
