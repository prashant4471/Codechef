#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long int n,x,y;
        scanf("%lu %lu %lu",&n,&x,&y);
        int z=2*n;
        long int even=0,odd=0;
        unsigned long int arr[z];
        for(int i=0;i<n;i++){
            scanf("%lu %lu",&arr[2*i],&arr[(2*i)+1]);
        }
        for(int i=x;i<=y;i++){
            int sum=i;
            for(int j=0;j<n;j++){
                sum=(arr[2*j]*sum)+arr[(2*j)+1];
            }
            if(sum%2==0)
            even++;
            else
            odd++;
        }
        printf("%ld %ld\n",even,odd);
    }
    return 0;
}
