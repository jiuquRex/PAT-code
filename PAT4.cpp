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
//}  广度优先不好用递归 

int main() {
//	struct node{
//		int id;
//		node *next;
//	}Node[N];  不能用结构体，因为可能会有多个孩子 
//  用变长数组vector正好 
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
	printf("%d", book[0]);    //这个输出方式！因为初始深度为0所以maxdepth就是除根节点后的层数！ 
	for(int i=1;i<=maxdepth;i++){
		printf(" %d", book[i]);
	}
	return 0;
}
