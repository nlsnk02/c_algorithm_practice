#include <iostream>
using namespace std;
int ans=0;

void foo (int n){
    int nt = n/2;
    ans++;
    for(int i=1; i<=nt; i++){
        foo(i);
    }
    return;
}
int main (){
    int n;
    cin >> n;
    foo(n);
    printf("%d\n", ans);
    return 0;
}