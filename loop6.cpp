#include <iostream>
using namespace std;
int main(){
    int n=15;
    bool isprime=true;
    for(int x=2;x>n;x++){
        if(n%x==0){
        isprime=false;
        break;
    }

    }
    if(isprime){
        cout<<"number is prime"<<endl;
    }else{
        cout<<"number is not prime"<<endl;

    }
    return 0;
}