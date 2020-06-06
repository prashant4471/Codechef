#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n;
        long int m=0,z;
        k=n;
        while(k%2==0){
            k=k/2;
            m++;
        }
        long int l=pow(2,m+1);
        z=n/l;
        cout<<z<<"\n";
    }
    return 0;
}
