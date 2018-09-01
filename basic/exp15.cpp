#include <iostream>
using namespace std;

struct sz {
    char fir;
    char sd[4];
    char end;
};

char* sz2str (struct sz t_sz){
    char str[6];
    str[0] = t_sz.sd[0];
    str[1] = t_sz.fir;
    str[2] = t_sz.sd[3];
    str[3] = t_sz.sd[1];
    str[4] = t_sz.end;
    str[5] = t_sz.sd[2];
    return str;
}

struct sz str2sz (char * str){
    struct sz t_sz;
    t_sz.sd[0] = str[0];
    t_sz.sd[1] = str[3];
    t_sz.sd[2] = str[5];
    t_sz.sd[3] = str[2];
    t_sz.fir = str[1];
    t_sz.end = str[4];
    return  t_sz;
}

 int main() {
     char * str = sz2str(str2sz("rbgggr"));
     printf("%s\n", str);
     return 0;
 }