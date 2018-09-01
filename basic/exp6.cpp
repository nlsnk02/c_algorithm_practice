#include <iostream>
using namespace std;

char numbs[]="0123456789";
char arr[] = {0,0,0,0,0,0,0,0,0,0};
void isn (char n){
  for (int i=0; i<10; i++)
    if (n==numbs[i])
      arr[i]++;
  return;
}
  
int main (){
  char str[10002];
  scanf("%s", str);
  int len = strlen(str);
  for (int i=0; i<len; i++)
    isn(str[i]);
  for (int i=0; i<10; i++){
    int tg= arr[i];
    printf("%d\n", tg);
  }
  return 0;
}
