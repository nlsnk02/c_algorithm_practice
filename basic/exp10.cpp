#include <iostream>
using namespace std;

int main (){
  int sum,temp;
  while(scanf("%d", &temp)) //改为while (scanf("%d%*d", &temp) != EOF)
    sum +=temp;
  printf("%d\n", sum);
  return 0;
}
    
