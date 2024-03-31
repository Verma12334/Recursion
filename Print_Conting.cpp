#include<iostream>
using namespace std;
void Print_Conting(int n){
   if(n==0){
    return;
   }
   cout<<n<<" ";
   Print_Conting(n-1);
}
int main(){
    int n;
    cin>>n;
    Print_Conting(n);
}