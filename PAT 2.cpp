#include <cstdio>
#define NMAX 1001

int main(){
  float a[NMAX]={0};
  int m,n,N;
  float A;

  scanf("%d", &m);
  for(int i=0;i<m;i++){
    scanf("%d%f", &N, &A);
    a[N] += A;
    }
    
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d%f", &N, &A);
    a[N] += A;
    }
  
  int K=0;
  for(int i=0;i<NMAX;i++){
    if(a[i] != 0) K++;
  }
  printf("%d", K);
  for(int i=NMAX-1;i>=0;i--){
    if(a[i] != 0.0){
      printf(" %d %.1f", i, a[i]);
    }
  }
  
  return 0;
}
