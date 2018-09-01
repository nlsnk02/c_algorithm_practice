#include <iostream>

using namespace std;

char dict[130000][100];
int n=0;

int max (int a, int b){
    if (a>b) return a;
    else return b;
}

int cp (char* a, char* b){
    int len = strlen(a), i;
    for(i=0; i<len; i++)
        if(a[i] != b[i]) break;
    return i;
}

int isL (char* s, int num){
    for(int i =0;;i++){
        if (i==num) continue;
        int ds = strcmp(dict[i], s);
        int f=0;
        if (ds == 0) return 1;
        if (ds < 0) f = max(cp(dict[i], s), f);
        if (ds > 0){
            if (f==0) return 0;
            else {
                if(isL(s+f, num)) return 1; 
                else return 0;
            }
        }
    }
}


int main (){
    memset(dict, 0, sizeof(dict));
    while(scanf("%s", dict[n]) != EOF) n++;
        
    for(int i=0; i<n; i++)
        if(isL(dict[i], i)) 
            cout << dict[i]<< endl;
    return 0;
}