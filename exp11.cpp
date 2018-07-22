#include <iostream>
using namespace std;

int main (){
    int a, b, index, temp;
    scanf("%d %d %d", &a, &b, &index);
    int c = a/b;
    
    if (c){
        a = a % b;
        printf("%d.", c);
    }else printf("0.");
    
    a *= 10;
    while(index --){
        c = a/b;
        if (! c){
            printf("0");
            a = a * 10;
        }else {
            a = a % b;
            printf("%d", c);
        }
    }
    printf("\n");
    return 0;

}