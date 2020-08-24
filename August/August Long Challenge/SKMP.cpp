#include<bits/stdc++.h>
#include<cstring>
#include<string>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,p;
        long int k=0;
        cin>>s;
        cin>>p;
        long int s1,p1,i;
        s1=s.length();
        p1=p.length();
        map<char, long int>a,b;
        for(i=0;i<s1;i++){
            a[s[i]]++;
            b[s[i]]++;
        }

        for(i=0;i<p1;i++){
            a[p[i]]--;
            b[p[i]]--;
        }

        string res1,res2;
        for(auto it: a){
            if(it.first==p[0]){
                for(i=0;i<p1;i++){
                    res1+=p[i];
                }
                while(it.second--)
                res1+=it.first;
            }
            else{
                while(it.second--)
                res1+=it.first;
            }
        }

        for(auto it:b){
            if(it.first==p[0]){
                while(it.second--)
                   res2+=it.first;
                for(i=0;i<p1;i++){
                    res2+=p[i];
                }
            }
            else{
                while(it.second--)
                res2+=it.first;
            }
        }

        cout<<min(res1,res2)<<"\n";
    }
    return 0;
}
