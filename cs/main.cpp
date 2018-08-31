#include <iostream>
using namespace std;
int main(){
    int asd[] = {1,2,3};
    int i=0;
    asd[i++] = 0;
    cout << asd[0] << asd[1] << asd[2] << i << endl;
    return 0;
}
