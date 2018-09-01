#include <iostream>
#include <vector>
using namespace std;

//使用队列
/*
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
*/
//使用vector

int main (){
    vector<int> lst;
    for (int i=0; i<5; i++) lst.push_back(i);
    while (lst.size() > 1){
        printf("%d\n", lst[0]);
        lst.erase(lst.begin());
        int temp = lst[lst.size()-1];
        lst[lst.size()-1] = lst[0];
        lst[0] = temp;
    }printf("%d\n", lst[0]);
    return 0;
}