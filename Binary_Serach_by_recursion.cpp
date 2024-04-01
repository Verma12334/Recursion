#include<iostream>
using namespace std;

bool Binary_serach(int arr[],int s,int e,int key){


if(s>e){
    return false;
}


    int mid=(s+e)/2;


if(arr[mid]==key){
    return true;
}


if(arr[mid]<key){
   return Binary_serach(arr,mid+1,e,key);
}
else{
     return Binary_serach((arr),s,mid-1,key);

}





}


int main(){
    int arr[5]={2,3,4,5,6};
    int key;
    cout<<"Enter the seraching elemnet"<<endl;
    cin>>key;
    if(Binary_serach(arr,0,4,key)){
    cout<<"Element found"<<endl;
   }
   else{
        cout<<"Element not found"<<endl;
   }
   return 0;
}