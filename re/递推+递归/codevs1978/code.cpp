#include<iostream>

using namespace std;

long long n,f[41];

int main(){
    scanf("%d",&n);
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=n;i+=1){
        f[i]=f[i-1]+f[i-2];
    }
    printf("%d",f[n-1]);
    return 0;
}

