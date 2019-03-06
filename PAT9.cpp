#include <cstdio>
#include <set>
#include <map>
using namespace std;

struct Node{
	int exp;
	float coe;
}node1[10],node2[10];

int main(){
	int m,n;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d %f",&node1[i].exp,&node1[i].coe);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %f",&node2[i].exp,&node2[i].coe);
	}
	int texp;
	set<int> s;
	double mp[2001]={0.0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			texp=(node1[i].exp+node2[j].exp);
			s.insert(texp);
			mp[texp]+=(node1[i].coe*node2 [j].coe);
		}
	}
	printf("%d",s.size());
	set<int>::iterator it=s.end();
	it--;
	for(it;;it--){
		printf(" %d %.1f",*it,mp[*it]);
		if(it==s.begin())
			break;
	}
    return 0;
}
