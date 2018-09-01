#include <iostream>
using namespace std;

int main (){
  char s[100];
  scanf("%s", s);
  int len = strlen(s);
  for (int i=1; i<=len; i++)
    if (len % i ==0){
      //printf("#a loop began%d\n", i);
      int ji= len-i-1, flag=1;//注意flag刷新的问题;边界的问题
      for (int ni=0; ni<=ji; ni+=i)
	if (s[ni]!=s[ni+i]){
	  flag=0;
	  break;
	}
      if (flag){
	printf("%d\n",i);
	break;
      }
    }
  return 0;
}
