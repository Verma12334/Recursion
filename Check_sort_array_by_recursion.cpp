#include<iostream>
using namespace std;

bool issort(int arr[],int n){

//base case
if(n==0 || n==1){
    return true;
}

if(arr[0]>arr[1]){
    return false;
}
else{
    return issort((arr+1),n-1);
}
}
int main(){
    int arr[5]={2,3,4,5,6};
    if(issort(arr,5)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
}