#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,total=0;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        }
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<n-i;j++)
            sum+=a[i+j][j];
            if(sum>total)
            total=sum;
        }
        for(int i=1;i<n;i++){
            sum=0;
            for(int j=0;j<n-i;j++)
            sum+=a[j][i+j];
            if(sum>total)
            total=sum;
        }
        cout<<total<<"\n";
    }
    return 0;
}
