//max sub array summ
#include <iostream>
using namespace std;
void subarraysum(int *arr,int n){
    int maxsum;
    for(int start=0; start<n;start++){
       int  currsum=0;
       for(int end=start;end<n;end++){
        currsum+=arr[end];
        maxsum=max(maxsum,currsum);

       }
       cout<<endl;
    
    }
    cout<<"maximum subarraysum="<<maxsum<<endl;
}
int main(){
    int arr[]={1,-3,4,5,-6,-7,8};
    int n=sizeof(arr)/sizeof(int);
    subarraysum(arr,n);
    return 0;
}