#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n],b[n];
        long int sum1,sum2,sum,count;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sum1=0;
        sum2=0;
        sum=0;
        count=1;
        for(int i=0;i<n;i++){
            sum1+=a[i];
            sum2+=b[i];
            if(sum1==sum2){
                count+=1;
                if(count==2){
                    sum+=a[i];
                    count=1;
                }
            }
            else{
                count=0;
            }
        }
        cout<<sum<<"\n";
    }
}