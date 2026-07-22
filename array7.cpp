#include <iostream>
using namespace std;
binsearch(int *arr,int n,int key ){
    int st =0,end=n-1;
    while(st<=end){
       int  mid=st+end/2;
       if(arr[mid]==key){//key found
        return mid;
    }else if(arr[mid]<key){//2nd half
        st=mid+1;

    }else{//1sthalf
        end =mid-1;

    }
         
    }
    return -1;
}
int main(){
   int  arr[]={1,2,3,4,5,6,7,8,12,13,14,15,16};
   int n=sizeof(arr)/sizeof(int);
  cout<<binsearch(arr,n,12)<<endl;
   return 0;
}