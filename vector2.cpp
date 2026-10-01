#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<"size:"<<vec.size()<<endl;
    cout<<"capacity:"<<vec.capacity()<<endl;

    vec.push_back(4);
    cout<<"size:"<<vec.size()<<endl;
    cout<<"capacity:"<<vec.capacity()<<endl;
    return 0;
}