#include<iostream>
using namespace std;
long int a[100000][2];
int check(long int p,long int q,long int z){
    for(long int i=0;i<z;i++){
        if(a[i][0]==(p-1) && a[i][1]==(q+2) ||
           a[i][0]==(p+1) && a[i][1]==(q+2) ||
           a[i][0]==(p+2) && a[i][1]==(q+1) ||
           a[i][0]==(p+2) && a[i][1]==(q-1) ||
           a[i][0]==(p+1) && a[i][1]==(q-2) ||
           a[i][0]==(p-1) && a[i][1]==(q-2) ||
           a[i][0]==(p-2) && a[i][1]==(q-1) ||
           a[i][0]==(p-2) && a[i][1]==(q+1) 
        )
        return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,i,x,y;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
        cin>>x>>y;
            if(check(x,y,n) &&
               check(x,y+1,n) &&
               check(x+1,y+1,n) &&
               check(x+1,y,n) &&
               check(x+1,y-1,n) &&
               check(x,y-1,n) &&
               check(x-1,y-1,n) &&
               check(x-1,y,n) &&
               check(x-1,y+1,n) 
            )
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
    }
    return 0;
}
