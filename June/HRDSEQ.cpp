#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0,count=0;
        cin>>n;
        int a[n];
        a[0]=0;
        if(n>1){
            for(int i=1;i<n;i++){
                for(int j=i-1;j>=1;j--){
                    flag=0;
                    if(j==0){
                        a[i]=0;
                        break;
                    }
                    else{
                        if(a[j-1]==a[i-1]){
                            a[i]=(i-1)-(j-1);
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                a[i]=0;
            }
        }
        int m=a[n-1];
        for(int i=0;i<n;i++){
            if(a[i]==m)
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
