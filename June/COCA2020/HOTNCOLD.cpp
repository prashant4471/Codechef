#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int m,tc,th;
        int flag=0;
        cin>>m>>tc>>th;
        long int c;
        if((abs(tc-th))%3==0){
            c=(abs(tc-th))/3;
            if(c<=m)
            cout<<"No"<<"\n";
            else
            cout<<"Yes"<<"\n";
        }
        else
        cout<<"Yes"<<"\n";
    }
    return 0;
}
