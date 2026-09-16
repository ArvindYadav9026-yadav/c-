#include<iostream>
using namespace std;

void fun(){
cout<<"Hi" <<endl;
}
void fun(int x){ 
cout<<"Good Morning" <<endl;
}
void fun(int x, int y){
    cout<<"Kaise ho tum"<<endl;
}
int main(){
    fun();
    fun(7);
    fun(4,8);

  
}