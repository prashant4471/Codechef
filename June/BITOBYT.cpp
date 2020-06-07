#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int bit=0,nib=0,byte=0;
        int a,b;
        a=n%26;
        b=n/26;
        if(a==1 || a==2)
        bit=pow(2,b);
        else if(a>2 && a<=10)
        nib=pow(2,b);
        else if(a>10)
        byte=pow(2,b);
        else if(a==0)
        byte=pow(2,b-1);
        cout<<bit<<" "<<nib<<" "<<byte<<"\n";
    }   
    return 0;
}
