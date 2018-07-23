#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> s[1000];
char q[4][100];

int is_same ()



int main (){
    memset(s, 0, sizeof(s));
    memset(q, 0, sizeof(q));
    int n=0;
    for(;scanf("%d", &s[n][0]) != EOF;i++);
    
    //接受指令
    char s1[], s2[];
    int a,b;
    while (scanf("%s %d %s %d", s1, a, s2, b) != EOF){
        if(is_same(a,b)) printf("wrong cmd!\n");    
        if (s1== "move"){
            if (a == "onto") move_onto(a, b);
            if (b == "over") move_over(a, b);
        }else{
            if (a == "onto") pile_onto(a, b);
            if (b == "over") pile_over(a, b);
        }
    }
}