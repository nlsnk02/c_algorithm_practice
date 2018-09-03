//vijos 1217
#include <iostream>

using namespace std;

char cg[10000]={0};

int dr (int a, int b){
    int temp = a - b;
    if (temp>=2 || temp<=-2) return 1;
    return 0;
}

int main (){
    char ifm;
    int i =0;
    while((ifm = getchar())){
        if (ifm == 'E') break;
        if (ifm == 'W' || ifm == 'L') cg[i++]=ifm; 
    }
    int ws=0, ls=0;
    for(int j=0;j<i;j++){
        if (cg[j] == 'W') ws++;
        if (cg[j] == 'L') ls++;
        if ((ws >= 11 || ls >= 11) && dr(ws, ls)){
            printf("%d:%d\n", ws, ls);
            ws=0;ls=0;
        }
    }


    printf("%d:%d\n\n", ws, ls);
    ws=0;ls=0;

    for(int j=0;j<i;j++){
        if (cg[j] == 'W') ws++;
        if (cg[j] == 'L') ls++;
        if ((ws >= 21 || ls >= 21) && dr(ws, ls)){
            printf("%d:%d\n", ws, ls);
            ws=0;ls=0;
        }
    }
    printf("%d:%d\n", ws, ls);

    return 0;
}
