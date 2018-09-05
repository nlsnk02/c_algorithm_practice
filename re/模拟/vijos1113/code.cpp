#include <iostream>
using namespace std;

int main (){
    int days[7]={0};
    int n,m;
    for (int i=0; i<7; i++){
        scanf("%d %d", &n, &m);
        days[i] = n+m;
    }
    int max=0;
    for (int i=1; i<7; i++){
        if (days[max]<days[i]) max = i;
    }
    if (days[max]>8) printf("%d\n", max+1);
    else printf("0\n");
}