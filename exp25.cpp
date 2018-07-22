#include <iostream>
#include <vector>
//to practice STL
using namespace std;

int main (){
    //vecctor
    vector<int> vec;
    vec.resize(100);
    vec[0] = 1;vec[1] = 2;
    //索引
    vec[1]=0;
    //插入
    vec.push_back(3);
    vec.insert(vec.begin() + 1, 12);
    //删除
    vec.pop_back();
    vec.erase(vec.begin());
    //others
    (vec.begin()+1)[0] = 1;
    

}