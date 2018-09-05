#include <iostream>
using namespace std;

int main (){
  int m=0, j=0, y=0, ms[12], is=1;
  for (int i=0;i<12;i++) scanf("%d", &ms[i]);
  for (int i=0;i<12;i++){
    y = ms[i];
    int l = 300 + j - y;
    if (l < 0) {printf("-%d\n", i+1);is =0; break;}
    j = l % 100;
    m+= l - j;
  }
  if (is) printf("%d\n", m * 120 / 100);
  return 0;
}
