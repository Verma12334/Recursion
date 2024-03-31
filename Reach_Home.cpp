#include<iostream>
using namespace std;

   void reachhome(int src,int dest){
    cout<<"source  "<<src<<"destinstion "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pahuch gay"<<endl;
        return;
    }

    //processing -ek steo aage badhjao
    src++;

    //recursive call
    reachhome(src,dest);
   }
int main(){
    int dest =10;
    int src=1;
    cout<<endl;
    reachhome(src,dest);
}
