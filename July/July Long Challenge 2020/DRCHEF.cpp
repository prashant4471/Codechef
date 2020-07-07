#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,x,p;
        cin>>n>>x;
        std::vector<long int> a;
        std::vector<long int> b;
        std::vector<long int> c;
        for(long int i=0;i<n;i++){
            cin>>p;
            a.push_back(p);
        }
		long int day=0;
        sort(a.begin(),a.end());
        for(auto it: a){
            if(it<=ceil(x/2))
            b.push_back(it);
            else
            c.push_back(it);
        }
        long int l;
		if(c.size()){
		   for(auto it:c){
			   while(x<it){
				   day++;
				   x*=2;
			   }
			   day++;
			   x=2*it;
		   }
		}
	    l=b.size();
	    day+=l;
	    cout<<day<<"\n";
    }
    return 0;
}
