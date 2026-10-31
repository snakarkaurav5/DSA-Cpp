#include <iostream>
using namespace std;
void sayhello(){
    cout<<"hello:)"<<endl;
}
void assistancee(){
    sayhello();//function recall
    cout<<"work done"<<endl;
}
int main(){
    assistancee();//function recall
    return 0;
}