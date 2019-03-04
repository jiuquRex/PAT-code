#include <iostream>
#include <algorithm>
using namespace std;
int n,m,c1,c2;
const int NMAX = 510;
const int inf = 99999999;
int teams[NMAX];
int mLength[NMAX][NMAX];
mlength  

int main(){
	
	
	scanf("%d%d%d%d",&n,&m,&c1,&c2);
	for(int i=0;i<n;i++){
		scanf("%d",&teams[i]);
	}
	
	int a,b,c;
	fill(mLength[0],mLength[0]+NMAX*NMAX,inf); 
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&a,&b,&c);
		mLength[a][b]=mLength[b][a]=c;
	}
	
	int dis[NMAX],num[NMAX],t[NMAX];
	bool visited[NMAX];
	fill(dis,dis+NMAX,inf);
	dis[c1]=0;
	num[c1]=1;
	t[c1]=teams[c1];

//    fill(visited,visited+NMAX,false);  
//    这条可以不用，因为初始化就是false 

    for(int i=0;i<n;i++){
    int u=-1,minn=inf;
    for(int j=0;j<n;j++){
    	if(visited[j]==false && dis[j]<minn){
    		u=j;
    		minn=dis[j];
    	}
    }
    if(u==-1) break;
    visited[u]=true;
    
    for(int v=0;v<n;v++){
    	if(visited[v]==false && mLength[u][v] != inf){
    		if(dis[u]+mLength[u][v]<dis[v]){
    			dis[v] =dis[u] + mLength[u][v];
    			num[v] = num[u];
    			t[v]=teams[v]+t[u];
    		}
    		else if(dis[u]+mLength[u][v]==dis[v]){
    			num[v]=num[u]+num[v];
    			if(t[u]+teams[v]>t[v]){
    				t[v]=t[u]+teams[v];
    			}
    		}
    	}
    }
    }
	printf("%d %d", num[c2], t[c2]);
    return 0;
}
 
