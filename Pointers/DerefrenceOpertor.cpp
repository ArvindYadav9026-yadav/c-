#include<iostream>
using namespace std;
int main(){
    int x = 7 ;
    int* ptr =&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    //cout<<*ptr<<endl;
    //*p derefrence opertor
   // *ptr=70;
   *ptr +=8;// x=x+8;
    cout<<x<<endl;
  
}