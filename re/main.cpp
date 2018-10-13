#include <iostream>
#include <cstring>
using namespace std;

int main (){
    char s[] = "(11,LLL)";
    int v; char a[100] = {0};
    sscanf(s, "(%d,%s", &v, a);
    cout << v << endl << a << endl;
    return 0;
}