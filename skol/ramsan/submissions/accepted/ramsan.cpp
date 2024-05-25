#include <stdio.h>

int main(){
  int a,b,n,nw,s,out[100];
  scanf("%d %d", &nw, &n);
  s=-1;
  for(a=0;a<n;a++) out[a]=0;
  for(a=0;a<n;a++){
    for(b=0;b<nw;b++) {
      s=(s+1)%n;
      while(out[s]) s=(s+1)%n;
    }
    //printf("%d\n", s+1);
    out[s]=1;
  }
  printf("%d\n", s+1);
  return 0;
}
