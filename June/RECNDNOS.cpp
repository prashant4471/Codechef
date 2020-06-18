#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[1001]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++; 
        }
        int res=0,sum,ele;
        for(int i=1;i<1001;i++){
            if(b[i]>0){
                sum=0;
                for(int j=0;j<n;j++){
                    if(a[j]==i){
                      sum++;
                      j++;
                    }
                }
                if(sum>res){
                    res=sum;
                    ele=i;
                }
            }
        }
        cout<<ele<<"\n";
    }
    return 0;
}
