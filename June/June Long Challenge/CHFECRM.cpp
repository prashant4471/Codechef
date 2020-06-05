#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i;
        cin>>n;
        int c1=0,c2=0;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++){
            m=a[i];
            if(m==5){
                c1++;
            }
            else if(m==10){
                if(c1>0){
                    c2++;
                    c1--;
                }
                else
                break;
            }
            else if(m==15){
                if(c2>0){
                    c2--;
                }
                else if(c1>1){
                    c1-=2;
                }
                else
                break;
            }
        }
        if(i==n)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}
