#include <iostream>
#include <stack>
using namespace std;

int main (){
    int a=0;
    int b[1];
    b[0] = a++;
    printf("%d  %d\n", b[0], a);
    return 0; 
}