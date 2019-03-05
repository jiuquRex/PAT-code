#include <cstdio>
using namespace std;
int main(){
	int n,nlevel=0,tlevel;
	int time=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&tlevel);
		if(tlevel>nlevel){
			time+=6*(tlevel-nlevel);
		}
		else{
			time+=4*(nlevel-tlevel);
		}
		nlevel=tlevel;
	}
	time+=(5*n);
	printf("%d",time);
	return 0;	
}
