#include <iostream>
using namespace std;
//回文检测
int main (){
  char ipt[50];
  while(scanf("%s", ipt)==1){
    int len= strlen(ipt)-1;
    int m=0;
    const char *me[]={"回文","不是回文"};
    for (int i=0;i<len/2;i++)
      if (ipt[i] != ipt[len-i]) m=1;
    printf("%s\n", me[m]);
  }
  return 0;
}
