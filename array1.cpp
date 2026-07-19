#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,6,7,8};
    int n = sizeof(int)/sizeof(arr);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i>max]){
            max=arr[i];   

        }
    }
    cout<<"largest="<<max<<endl;
    return 0;
}