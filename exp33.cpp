#include <iostream>
using namespace std;

int ino[100], posto[100], lv[10000], isv[10000];

int Min (int a,int b){
    if (lv[a] <= lv [b]) return a;
    else return b;
}

int input (){
    int n, nums[100];
    memset(nums, 0, sizeof(nums));
    int i;
    for (i=0; scanf("%d", &n) == 1; i++) nums[i] = n;
    int len = i/2;
    for(int j=0; j<i; j++){
        if (j<len) ino[j] = nums[j];
        else posto[j-len] = nums[j];
    }
    return len;
}

void addv (int v, int fir, int end){
    //for ino
    for(int i=fir; i<=end; i++)
        lv[ino[i]] += v;
    return;
}

void get_l (int i_f, int i_e, int p_f, int p_e){
    int root = posto[p_e];
    addv(root, i_f, i_e);
    if (i_f>=i_e){
        isv[ino[i_f]]=1;
        return;
    }
    int i = i_f;
    for(; i <= i_e; i++)
        if(root == ino[i]) break;
    get_l (i_f, i-1, p_f, p_f + (i - 1 - i_f));
    get_l (i+1, i_e, p_e - (i_e - i), p_e-1);
    return;
}

int main (){

    while(1){
        memset(ino, 0, sizeof(ino));
        memset(posto, 0, sizeof(posto));
        int len = input();
        if(! len) break;
        get_l(0, len-1, 0, len-1);

        int min=0;lv[0]=10000;
        for(int i=1; i<10000; i++)
            if (isv[i])
                min = Min(min, i);

        printf("%d\n", min);
        
        return 0;
    }
}