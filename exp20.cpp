#include <iostream>
using namespace std;

int abs (int n1, int n2){
    int re = n1 - n2;
    if (re < 0) return -re;
    else return re;
}

int main (){
    int n;cin >> n;
    int a[n], former[n];
    for (int x=0; x<n; x++){
        cin >> a[x];
        former[x] = a[x];
    }
    int flag = 1000;
    while(flag--){
        int temp = a[0];
        for (int x=0; x<n-1; x++)
            a[x] = abs(a[x], a[x+1]);
        a[n-1] = abs(a[n-1], temp);

        for (int x =0; x<n; x++) cout << a[x];
        cout << endl;

        int is = 1;
        for (int x =0; x<n; x++)
            if(a[x] != former[x]){
                is = 0;
                for (int x =0; x<n; x++)
                    former[x] = a[x];
                break;
            }   

        if(is){
            if (a[0]) cout << "is loop\n";
            else cout << "is zero\n";
            break;
        }
    }
    
}