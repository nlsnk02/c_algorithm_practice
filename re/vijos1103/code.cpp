#include <iostream>
using namespace std;

int main (){
    int L, M;
    scanf("%d", &L);
    scanf("%d", &M);
    int T[L];
    for (int i=0; i<L; i++){
        T[i] = 0;
    }
    for (int i=0; i<M; i++){
        int lf, rt;
        scanf("%d %d", &lf, &rt);
        T[lf]--;
        T[rt]++;
    }
    int nt=L+1, temp=0, st=0;
    for (int i=0; i<L; i++){
        if (T[i]==0) continue;
        if (temp==0) st=i;
        temp += T[i];
        if (temp==0) nt -= i-st+1; 
    }
    printf("%d\n", nt);
    return 0;
}