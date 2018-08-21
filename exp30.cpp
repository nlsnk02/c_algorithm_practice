//uva 679
#include <iostream>
using namespace std;

int op[2*20-1];

int main (){
    int deth, n;
    while(scanf("%d %d", &deth, &n) != EOF){
        memset(op, 0, sizeof(op));
        int ball;
        for(int j=0; j<n; j++){
            ball=1;
            for (int i=1; i< deth; i++){
                if (op[ball] == 0){
                    op[ball] = 1;
                    ball = ball*2;
                }else{
                    op[ball] = 0;
                    ball = ball*2+1;
                }
            }
        }
        printf("%d\n", ball);
    }
    return 0;
}