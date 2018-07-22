#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct built{
    float x1, x2, y, h;
};

struct eye {
    float x1, x2;
    int builds[100];
};


int main (){
    int n;
    cin >> n;
    struct built builds[n];
    for (int i=0; i<n; i++){
        int wt;
        cin >> builds[i].x1 >> builds[i].y >> wt >> builds[i].h;
        builds[i].x2 = builds[i].x1 + wt;
    }

    vector<float> eyes;
    eyes.resize(2*n+1);
    for (int i=0; i<n; i++){
        eyes[2*i] = builds[i].x1;
        eyes[2*i+1] = builds[i].x2;
    }
    sort(eyes.begin(), eyes.end());
    int temp = eyes.size()-1;
    float temp1 = -1;
    while (temp --){
        if (temp1 == eyes[temp]) eyes.erase(eyes.begin()+temp-1);
        else temp1 = eyes[temp];
    }

    temp = eyes.size()-1;
    struct eye eyesight[100];memset(eyesight, 0, sizeof(eyesight));
    for (int i=0; i<temp-1; i++){
        eyesight[i].x1=eyes[i];
        eyesight[i].x2=eyes[i+1];
        for (int x =0; x<n; i++){
            if(builds[x].x1>=eyes[i] && builds[x].x1<=eyes[i+1]) eyesight[i].builds[x] = 1;
            if(builds[x].x2>=eyes[i] && builds[x].x2<=eyes[i+1]) eyesight[i].builds[x] = 1;
        }
    }

    for (int i=0; i<temp; i++)
        cout << eyesight[i].x1 << eyesight[i].x2 << endl;



}