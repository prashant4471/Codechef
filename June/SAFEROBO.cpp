#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[100000];
        cin>>s;
        long int i1,i2;
        for(long int i=0;i<strlen(s);i++){
            if(s[i]=='A')
            i1=i;
            if(s[i]=='B'){
                i2=i;
                break;
            }
        }
        long int a,b;
        cin>>a>>b;
        int flag=0;
        while(i1<i2){
            i1+=a;
            i2-=b;
            if(i1==i2){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"unsafe"<<"\n";
        else
        cout<<"safe"<<"\n";
    }
    return 0;
}
