#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long int n=s.length();
        long int c=0;
        for(long int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                i++;
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
