#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int ns,nq;
    int s[1000],q[1000];
    int ind=0;
    while(cin >> ns >> nq){
        ind++;
        for(int i=0; i<ns; i++)
            cin >> s[i];
        sort(s, s+ns);
        for(int i=0; i<nq; i++)
            cin >> q[i];

        printf("CASE# %d:\n", ind);
        
        for(int i=0; i<nq; i++)
            for(int j=0; j<ns; j++)
                if (q[i] == s[j]) 
                    printf("%d found at %d\n", q[i], j);
            

    }
}