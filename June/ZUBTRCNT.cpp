#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c=1;
    while(c<=t){
        int l,k;
        cin>>l>>k;
        int count=0;
        while(l>=k){
            for(int i=k;i<=l;i++)
               count++;
               l--;
        }
        cout<<"Case "<<c<<": "<<count<<"\n";
        c++;
    }
    return 0;
}
