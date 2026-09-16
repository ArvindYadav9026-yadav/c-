#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charter value:";
    cin>>ch;
    if((int)ch>=65 && (int)ch<=90) cout<<"valid alphabet";
    else cout<<"not valid";
}