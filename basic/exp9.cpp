#include <iostream>
using namespace std;

int main (){
  char s[5][10]={"TRGSJ","XDOKI","M@VLN","WPABE","UQHCF"};
  int nu[2]={2,1};



  char cmd='c';
  while (scanf("%c%*c",&cmd) != EOF){
    if (cmd == '0')
      break;
    if (cmd == 'A'){
      if (nu[0]==0)
	printf("This puzzle has no final configuration.\n");
      else{
      s[nu[0]][nu[1]] = s[nu[0]-1][nu[1]];
      nu[0]-=1;
      }
      continue;
    }
    if (cmd == 'B'){
      if (nu[0]==4) printf("This puzzle has no final configuration.\n");
      else{
      s[nu[0]][nu[1]] = s[nu[0]+1][nu[1]];
      nu[0]+=1;
      }
      continue;
    }
    if (cmd == 'L'){
      if (nu[1]==0) printf("This puzzle has no final configuration.\n");
      else{
      s[nu[0]][nu[1]] = s[nu[0]][nu[1]-1];
      nu[1]-=1;
      }
      continue;
    }
    if (cmd == 'R'){
      if (nu[1]==4) printf("This puzzle has no final configuration.\n");
      else{
      s[nu[0]][nu[1]] = s[nu[0]][nu[1]+1];
      nu[1]+=1;
      }
      continue;
    }
    printf("This puzzle has no final configuration.\n");
  }
  
  s[nu[0]][nu[1]]='@';

  for (int a=0;a<5;a++){
    for (int b=0;b<5;b++)
      printf("%c",s[a][b]);
    printf("\n");
  }

  return 0;
}
