#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int p,k,i,c1,c2,r1=0,r2=0;
        for(i=0;i<n;i++){
            cin>>p>>k;
            c1=c2=0;
            while(p){
                c1+=(p%10);
                p/=10;
            }
            while(k){
                c2+=(k%10);
                k/=10;
            }
            if(c1>c2)
            r1++;
            else if(c2>c1)
            r2++;
            else{
                r1++;
                r2++;
            }
        }
        if(r1>r2)
        cout<<"0 "<<r1<<"\n";
        else if(r2>r1)
        cout<<"1 "<<r2<<"\n";
        else
        cout<<"2 "<<r1<<"\n";
    }
    return 0;
}
