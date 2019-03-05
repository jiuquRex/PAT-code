#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int k=0,a[10010]={0},d[10010]={0};
	int count=0,temp=0,start=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	int m=0;
	for(int i=0;i<k;i++){
		if(a[i]<=0){
			m++;
		}
		else
		    break;
	}
	if(m==k){
		printf("0 %d %d",a[0],a[k-1]);
		return 0;
	}
	for(int j=m;j<k;j++){
		d[j]=max(a[j],(a[j]+d[j-1]));
	}
	for(int i=m;i<k;i++){
		if(i==m){
			temp=i;
			continue;
		}
		if(d[i]>d[temp]){
			temp=i;	
		}
	}
	start=temp;
	while(d[start]>0){
		start--;
	}
	printf("%d %d %d",d[temp],a[start+1],a[temp]);
	return 0;
}
