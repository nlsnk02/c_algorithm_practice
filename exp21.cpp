#include <iostream>
using namespace std;

//使用队列
int wd[1000];
int heads,iends;
void cg();


void rm (){
    if (iends-heads == 1) return;
    else {
        cout << wd[heads];
        heads++;
        cg();
    }
}

void cg (){
    if (iends-heads == 1) return;
    else{
        iends++;
        wd[iends]=wd[heads];
        heads++;
        rm();
    }
}

int main (){
    heads=0;iends=0;
    memset (wd, 0, sizeof(wd));
    for (;;iends++) if(scanf("%d", &wd[iends]) == EOF) break;
    iends--;
    rm();
    cout << "\n";
}
//使用vector