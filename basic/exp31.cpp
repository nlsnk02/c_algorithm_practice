#include <iostream>
using namespace std;

int tree[300][300];

char* input ()


void foo (char* s, int n){
    int len = strlen(s);
    int inx=256, num=0;
    for (int i =0; i<len; i++){
        if (s[i] == 'L') inx = inx / 2;
        else{
            inx = inx / 2;
            num += inx;
        }
    }
    tree[len][num] = n;
    return;
}

int main (){
    memset(tree, 0, sizeof(tree));
    char s[300];
    int n=0;
    while(scanf("(%d,%s)", &n, s) != EOF) foo(s, n);
    for (int i=0; i<300; i++)
        for (int j=0; j<300; j++)
            if(tree[i][j] != 0)
                printf("%d\n", tree[i][j]);
    return 0;
}