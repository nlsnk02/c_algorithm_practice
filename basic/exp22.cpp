#include <iostream>
#include <algorithm>
using namespace std;

int A[500000],B[500000];

int main (){
    memset(A,0, sizeof(A));
    memset(B,0, sizeof(B));
    int temp=0;
    while (scanf("%d%d",&A[temp], &B[temp]) != EOF) temp++;
    sort(A,A+temp);sort(B,B+temp);
    int is=1;
    while(temp--) if(A[temp]!=B[temp]){
        is=0;
        cout << endl << A[temp] << B[temp] << endl;
    }
    if(is) cout << "right!\n";
    else cout << "can't!\n";
    return 0;
}