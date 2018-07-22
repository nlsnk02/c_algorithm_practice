#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void print (string str, int max){
    cout << str;
    int temp = max - str.size();
    while (temp --) cout << ' ';
    return;
}

int main (){
    string strs[1100][200];memset(strs, 0, sizeof(strs));
    string str;
    int maxn_n[200];memset(maxn_n, 0, sizeof(maxn_n));
    int maxn_l[1100];memset(maxn_l, 0, sizeof(maxn_l));
    char c;
    int n=0,m=0;
    while ((c = getchar()) != EOF){
        if (c == ' ') {
            strs[n][m]= str;
            maxn_n[n] = max((int)str.size(), maxn_n[n]);
            str.clear();m++;
        }else{
            if (c == '\n'){
                strs[n][m]= str;
                maxn_n[n] = max((int)str.size(), maxn_n[n]);
                str.clear();
                maxn_l[n]=m;
                n++;m=0;
            }else str.push_back(c); 
        }
    }


    for (int x=0; x<100; x++)
        if (maxn_l[x] != 0) cout << maxn_l[x];


    for (int x=0; x<=n; x++){
        for (int y=0; y<maxn_l[x]; y++){
            print(strs[x][y], maxn_n[y]);
            cout << endl;
        }
        print(strs[x][maxn_l[x]], maxn_n[maxn_l[x]]);
    }

    return 0;
}