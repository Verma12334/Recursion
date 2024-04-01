#include<iostream>
using namespace std;

bool Linear_Serach(int arr[],int n,int key){

//base case

if(n==1){
    if(arr[0]==key){
        return true;
    }
    else{
        return false;
    }
}
else{
     Linear_Serach((arr+1),n-1,key);
}
}


int main(){
    int arr[5]={2,3,4,5,6};
    int key;
    cout<<"Enter the seraching elemnet"<<endl;
    cin>>key;
   if(Linear_Serach(arr,5,key)){
    cout<<"Element found"<<endl;
   }
   else{
        cout<<"Element not found"<<endl;
   }
   return 0;
}