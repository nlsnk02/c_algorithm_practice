#include <iostream>
using namespace std;

struct Node {
    int v;
    Node * left, * right, * former;
    Node() : v(0), left(0), right(0), former(0){}
};

struct Node* newnode () {return new Node(); }

struct Node* root = newnode();
int isfy=0;
int bz=0;

void foo (struct Node* nodes){
    if (nodes->v) {
        bz--;
        printf("%d ", nodes->v);
        if(nodes->left) foo(nodes->left);
        if(nodes->right) foo(nodes->right);
    }else return;

}

int main (){
    //输入
    char tg[100];memset(tg, 0, sizeof(tg));
    while (scanf("%s", tg) != EOF){
        bz++;
        int value= -1;
        char lo[100];memset(lo, 0, sizeof(lo));
        char temp[100];memset(temp, 0, sizeof(temp));
        tg[strlen(tg)-1] = 0;
        sscanf(tg+1, "%[^,],%s", temp, lo);
        sscanf(temp, "%d", &value);
        
        if (!(value + 1)) break;;
        //读入
        struct Node * flag = root;
        int len = strlen(lo);
        for(int i=0; i<len; i++){
            if (i == 'L'){
                if(flag->left) isfy=1; 
                else flag->left = newnode();
                flag = flag->left;
            }
            if (i == 'R'){
                if(flag->right) isfy=1;
                else flag->right = newnode();
                flag = flag->right;
            }
        }
        flag->v = value;
        memset(tg, 0, sizeof(tg));
    }
    //输出
    foo(root);
    printf("\n");
    if(bz || isfy) printf("-1\n"); 

    return 0;
}

