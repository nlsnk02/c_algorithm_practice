#include <iostream>
using namespace std;

int wd[100][100][100];


int main (){
    int n, m, temp, v;
    memset(wd, 1, sizeof(wd));
    scanf("%d %d", &n, &m);
    for (int x=0; x<n; x++)
        for (int y=0; y<m; y++){
            scanf("%d", &temp);
            for (int z=0;z<temp;z++)
                wd[x][y][z] = 0;
        }
    //添水
    scanf("%d", &v);
    int wth, wts[n][m];
    memset(wts, 0, sizeof(wts));
    for (wth=0; wth<100; wth++){
        if (v < 0) break;
        for (int x=0; x<n; x++)
            for (int y=0; y<m; y++){
                if (wd[x][y][wth]){
                    v--;
                    wts[x][y]=1;
                }
            }
    }

    
    
    temp = 0;
    for (int x=0; x<n; x++)
        for (int y=0; y<m; y++)
            if (wts[x][y]) temp+=1;

    int pers = temp * 100 / (n * m) ; 
    
    printf("wth = %d, wts = %d%% \n", wth, pers);
    return 0 ;

}