#include <iostream>
using namespace std;

double flag=0.0;
void add(double cs){
  flag = cs - '0' + 10*flag;
  return;
}

int main (){
  double ans[100];
  memset(ans, 0, sizeof(ans));
  char s[100];
  scanf("%s", s);
  int len = strlen(s);
  for (int i=0; i<=len; i++){
    if (s[i] == 'C')
      ans[i]=12.01;
    if (s[i] == 'H')
      ans[i]=1.00;
    if (s[i] == 'O')
      ans[i]=16.00;
    if (s[i] == 'N')
      ans[i]=12.01;
    if (s[i]>='1' && s[i]<='9')
      flag = s[i] - '0' + 10*flag;
    else if(flag){
      ans[i-1]=flag;flag=0;
    }
  }

  double p1=0,p2=0;
  for (int i=0,t=0; i<100; i++)
    if (ans[i]!=0){
      if (t){
	p2*=ans[i];
	p1+=p2;
	t=0;
      }else {
	p2=ans[i];
	t=1;
      }
    }
  
  printf("%.3f\n", p1);
  
  
  return 0;
}
