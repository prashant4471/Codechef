#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b,m;
        cin>>n>>b>>m;
        int arr[m];
        for(int i=0;i<m;i++)
            cin>>arr[i];
        int c=0,r,d=-1;
        for(int i=0;i<m;i++){
            r=arr[i]/b;
            if(r!=d){
                c++;
                d=r;
            }
        }
        cout<<c<<"\n";  
    }
    return 0;
}
