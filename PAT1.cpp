#include <cstdio>
#include <cstdlib> 
const int mod = 1000;
int main(){
  int A,B;
  int sum,asum,part1,part2,part3,temp;
  scanf("%d %d",&A,&B);
  sum = A + B;
  asum = abs(sum);
  
  if(asum<mod){
  if(sum<0)
      printf("-%d",asum);
  else
      printf("%d",asum);
  return 0;
  }
  
  if(asum<1000000){
  part2 = asum/mod;
  part1 = asum%mod;
  if(sum<0)
      printf("-%d,%03d",part2,part1);
  else
      printf("%d,%03d",part2,part1);

  return 0;
  }
  
  part1 = asum%mod;
  temp = asum/mod;
  part2 = temp%mod;
  part3 = temp/mod;
    if(sum<0)
      printf("-%d,%03d,%03d",part3,part2,part1);
  else
      printf("%d,%03d,%03d",part3,part2,part1);

  return 0;
}
