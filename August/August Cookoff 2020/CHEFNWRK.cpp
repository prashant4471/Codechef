#include<iostream>
using namespace std;
int main(){
    int v;
    cin>>v;
    while(v--){
        int n,k,sum=0,f=0,c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
             cin>>a[i];
             if(a[i]>k)
             f=1;
        }
        if(f)
        cout<<"-1\n";
        else{
            for(int i=0;i<n;i++){
                sum+=a[i];
                if(sum>k){
                    c++;
                    i--;
                    sum=0;
                }
            }
            if(sum)
            c++;
            cout<<c<<"\n";
            c=0;
        }
    }
    return 0;
}
