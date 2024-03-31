#include<iostream>
using namespace std;
inline int hand_shake(int n){
    if(n==0 ||n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return ((n-1)+hand_shake(n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<"Numbers of hand shakes between n person:="<<hand_shake(n);
}