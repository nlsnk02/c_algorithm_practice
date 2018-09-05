#include <iostream>
using namespace std;

int N, m;
double A1, An, d;
double q1=1,q2=0,q3=0,q4=0;

void foo (int n, double kh){
    if (n == 1) {q2+=kh; return;}
    if (n == N) {q3+=kh; return;}
    if (n == m) {q1-=kh; return;}
    foo(n-1, kh/2);
    foo(n+1, -kh/2); 
    q4+=kh;
    return;
}

int main (){
    scanf("%d %d", &N, &m);
    scanf("%lf %lf %lf", &d, &A1, &An);
    foo(m-1, 1/2); foo(m+1, -1/2); q4+=1;
    float res = (q2*A1 + q3*An +q4*d) / q1;
    printf("%.3f\n", res);
    return 0;
}