#include <iostream>
using namespace std;

int main (){
  int mm=0, jj=0, yy=0, ms[12], is=1;
  for (int i=0;i<12;i++) scanf("%d", &ms[i]);
  for (int i=0;i<12;i++){
    yy = ms[i];
    int l = 300 + jj - yy;
    if (l < 0) {printf("-%d\n", i+1);is =0; break;}
    jj = l % 100;
    mm+= l - jj;
  }
  if (is) printf("%d\n", mm * 120 / 100);
  return 0;
}
