#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v[100];
int book[100],maxdepth=-1;

void dfs(int index, int depth){
	if(v[index].size()==0){
		book[depth]++;
		maxdepth = max(maxdepth,depth);
		return ;
	}
	for(int t=0;t<v[index].size();t++){
		dfs(v[index][t],depth+1);
	}
}

//void bfs(int index, int depth){
//	for(int i=0;i<v[index].size();i++){
//		if(v[index][i].size==0){
//		    book[depth]++;
//		    maxdepth = max(maxdepth,depth);
//	    }
//	}
//	bfs(, int depth)
//}  ������Ȳ����õݹ� 

int main() {
//	struct node{
//		int id;
//		node *next;
//	}Node[N];  �����ýṹ�壬��Ϊ���ܻ��ж������ 
//  �ñ䳤����vector���� 
	int n,m,a,b,c;
	scanf("%d%d", &n, &m);
	for(int i=0;i<m;i++){
		int a,b,c;
	    scanf("%d%d", &a, &b);
	    for(int j=0;j<b;j++){
	    	scanf("%d", &c);
	    	v[a].push_back(c);
		}
	}
	dfs(1,0);
	printf("%d", book[0]);    //��������ʽ����Ϊ��ʼ���Ϊ0����maxdepth���ǳ����ڵ��Ĳ����� 
	for(int i=1;i<=maxdepth;i++){
		printf(" %d", book[i]);
	}
	return 0;
}
