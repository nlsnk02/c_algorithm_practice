#include <iostream>
using namespace std;
int main (){
  double s,h,a;
  double PI=3.1415;
  scanf("%lf%lf", &s,&h);
  a = PI * s * s * h;
  printf("%.3lf", a);
  return 0;
}
