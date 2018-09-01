#include <iostream>
using namespace std;
int j[100][100];
int H,V;

int foo (int h, int v, int n){
    if (H - h > n-2 || V - v > n-2){
        for (int x=0; x<n; x++)
            for (int y=0; y<n; y++)
                if (j[h+x][v+y] == 0) return 0;
        return +=1;
    }else return 0;
}

char *do_arr (char *s){
    int temp1, temp2;
    if (s[0]== 'H'){
        temp1 = (s[1] - '0') *2;
        temp2 = (s[1] - '0') *2 -1; 
    }else{
        temp1 = (s[1] - '0') *2 -1;
        temp2 = (s[1] - '0') *2;
    }
    return ;//返回temp1,tamp2以字符串
}

int main (){
    char s[5];
    scanf("%d %d", &H, &V);
    memset(j, 0, sizeof(j));

    while (scanf("%s%*d", s) != EOF){
        if(s[0]=='H'){

        }
        else {

        }
    }

    for (int x=0; x<H; x++){
        for (int y=0; y<V; y++)
            printf("%d", j[x][y]);
        printf("\n");
    }

    if (foo (1,1,2)) printf("enm");

    

    return 0;
}