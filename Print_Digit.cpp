#include<iostream>
using namespace std;

void print_digit(string arr[],int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    print_digit(arr,n);
    cout<<arr[digit]<<" ";

}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
print_digit(arr,n);
}