#include <stdio.h>
int main(){
int t;
scanf( "%d",&t);
for(int i=0;i<t;i++){
int n,sum=1,r=0;
scanf("%d",&n);
int p[n],w=n;
for(int k=0;k<n;k++){
scanf("%d",&p[k]);
}
for(int j=0;j<n;j++){
	for(int q=j;q>0;q--){
		if((p[q]-p[q-1])<=2){
			sum=sum+1;
		}
		else{
			break;
		}
	}
	for(int q=j;q<n-1;q++){
		if((p[q+1]-p[q])<=2){
			sum=sum+1;
		}
		else{
			break;
		}
	}
if(sum>r){
	r=sum;
}
if(sum<w){
	w=sum;
}
sum=1;
}
printf("%d %d",w,r);
printf("\n");
}
}

