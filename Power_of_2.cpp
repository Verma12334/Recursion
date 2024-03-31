#include<iostream>
using namespace std;
inline int power(int n){
    if(n==0){
        return 1;
    }
    return (2*power(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<"Power of 2 ="<<power(n);
}