#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,y1,y2,l,m;
        cin>>n>>h>>y1>>y2>>l;
        m=2*n;
        int a[m];
        for(int i=0;i<n;i++){
            cin>>a[(2*i)]>>a[(2*i)+1];
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(a[2*i]==1){
                if((h-y1)<=a[(2*i)+1]){
                c++;
                }
                else{
                    if(l>=2){
                        l--;
                        c++;
                    }
                    else
                    break;
                }
            }
            else{
                if(y2>=a[(2*i)+1]){
                c++;
                }
                else{
                    if(l>=2){
                        l--;
                        c++;
                    }
                    else
                    break;
                }
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
