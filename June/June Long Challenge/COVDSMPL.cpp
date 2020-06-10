#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            a[i][j]=0;
        }
       
        int count;
        cout<<"1"<<" "<<"1"<<" "<<"1 "<<n<<" "<<n<<"\n";
        cin>>count;
        int b[n];
        for(int i=0;i<n;i++){
            cout<<"1"<<" "<<i+1<<" "<<"1"<<" "<<i+1<<" "<<n<<"\n";
            cin>>b[i];
        }
        int m,flag;
        for(int i=0;i<n;i++){
            flag=b[i];
            if(flag==0){
                continue;
            }
            else{
            for(int j=0;j<n;j++){
                cout<<"1 "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<"\n";
                cin>>m;
                if(m==1){
                    a[i][j]=1;
                    flag--;
                    if(flag==0)
                    break;
                }
            }
            }
        }
        cout<<"2\n";
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<"\n";
        }
        int X;
        cin>>X;
        if(X==-1)
        break;
    }
    return 0;
}
