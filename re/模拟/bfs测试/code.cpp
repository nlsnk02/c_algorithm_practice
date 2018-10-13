#include <iostream>
#include <queue>
using namespace std;
int is = 0, sum =0;
struct Node {
    int l;
    int v;
    struct Node *left, *right;
    Node() : l(0), v(0), left(NULL), right(NULL){} 
};

int main (){
    struct Node *root,*u = new Node();
    //DFS读入树
    char s[100] ={0};
    while (cin >> s){
        int v=0;
        sum++;
        char loc[100]= {0};
        sscanf(s, "(%d,%s", &v, loc);
        u = root;
        for(int i=0; loc[i] != ')'; i++){
            if (loc[i] == 'l'){
                if(u->left) u = u->left;
                else {
                    u->left = new Node();
                    u = u-> left;
                };
            }else {
                if(u->right) u = u->right;
                else {
                    u->right = new Node();
                    u = u-> right;
                };
            };
        }
        u = new Node(); u->v=v;
    }
    //BFS计算最小距离
    cout << "Go!" << root->v <<endl;
    queue<struct Node*> q;
    q.push(root);
    while(!q.empty()){
        u = q.front(); q.pop();
        cout << u->l << "  ";
        q.push(u->left);q.push(u->right);
    }
    cout << "\nEnd\n";
    return 0;
}   