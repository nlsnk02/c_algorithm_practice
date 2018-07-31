#include <iostream>
#include <queue>
using namespace std;

int mian (){
    int lst[10000];
    int lstt[10000];
    priority_queue<int> pd;

    int ihead=0, iend=0;
    memset(lst, 0, sizeof(lst));
    memset(lstt, 10000, sizeof(lstt));
    
    for(; scanf("%d", &grade) == 1; iend++){
        lst[iend] = grade;
        lstt[iend] = iend;
        pd.push(grade);
    }
    
    int ind=0,t=0;
    while(iend == ihead){
        if (lst[ind]==0) continue;
        if (lst[ind] == pd.top()){
            printf("this is task #%d#, used time #%d#", ind, t);
            pd.pop();
        }
        else{
            ihead++;
            
        }
    }
}