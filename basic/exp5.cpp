#include <iostream>
using namespace std;

int main (){
  char s[80];
  scanf("%s", s);
  int len = strlen(s), sum=0, ms=0;
  for (int i=0; i<len; i++)
    if (s[i]=='o'){
      if(ms){
	sum = sum + ms + 1;
	ms++;
      }else{ms++;sum++;}
    }else ms=0;
  
  printf("%d\n", sum);
  return 0;
}
