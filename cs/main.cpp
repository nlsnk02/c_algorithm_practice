#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    scanf("%s", s);//warning: format specifies type 'char *' but the argument has type 'std::__1::string'
    printf("%s\n", s.c_str());
    return 0;
}
