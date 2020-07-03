#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
               if(i==0 && j==0){
                   cout<<"O";
                   c++;
               }
               else if(c<n){
                   cout<<".";
                   c++;
               }
               else
               cout<<"X"; 
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}
