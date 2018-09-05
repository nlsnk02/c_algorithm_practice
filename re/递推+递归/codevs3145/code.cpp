#include <cstdio>
using namespace std;
void foo (char from, char to, char other,int n){
    if (n==1) {
        printf("1 from %c to %c\n", from, to);
        return;
    }
    foo(from, other, to, n-1);
    printf("%d from %c to %c\n", n, from, to);
    foo(other, to, from, n-1);
    return;
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d\n", n*n-n+1);
    foo('A', 'C', 'B', n);
    return 0;
}