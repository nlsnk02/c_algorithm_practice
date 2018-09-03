#include <iostream>
using namespace std;
int main (){
    double k,sum=0,n=1;
    scanf("%lf", &k);
    for(;sum <= k; n++) sum += 1 / n;
    printf("%1.f\n", n-1);
}
