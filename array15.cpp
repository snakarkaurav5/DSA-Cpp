//trpping water question 
#include <iostream>
using namespace std;
void trap(int *hieght ,int n){
    int leftmax[20000],rightmax[20000];
     leftmax[0]=hieght[0];
     rightmax[n-1]=hieght[n-1];
    for(int i=0;i<n;i++){
        leftmax[i]=max(leftmax[i-1],hieght[i-1]);
        
    }for(int i=n-2;i<0;i--){
        rightmax[i]=mx(rightmax[i+1],hieght[i+1]);
    
    }
    int watertrapped=0;
    for(int i=0;i<n;i++){
        int currwater=min(leftmax[i],rightmax[i])-hiegts[i];
if(currwater>0){
    
}
cout<<"watertrapped="<<watertrapped<<endl;

        

    }
}
int main(){
    int hieghts[7]={4,2,0,6,3,2,5};
    int n=sizeof(hieghts)/sizeof(int);
trap(hieghts,n);
    return 0;
}