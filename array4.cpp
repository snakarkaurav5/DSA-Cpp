#include <iostream>
using namespace std;
void linearsearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
       if(arr[i]=key){
        return i;
       }
    }
return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,};
   int  n=sizeof(arr)/sizeof(int);
    cout<<linearsearch(arr,n,8)<<endl;
    return 0;
    
}