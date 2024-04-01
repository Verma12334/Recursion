#include<iostream>
using namespace std;

int sum(int arr[],int n){

//base case

if(n==1){
    return arr[0];
}
    int ans=0;
    ans=arr[0]+sum((arr+1),n-1);
    return ans;

}

int main(){
    int arr[5]={2,3,4,5,6};
    cout<<"Sum of array elements "<<sum(arr,5);
}