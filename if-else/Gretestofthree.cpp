#include<iostream>
using namespace std;
int main(){
    int a; 
    cout<<"Enter a number:";
    cin>>a;
     int b; 
    cout<<"Enter a number:";
    cin>>b;
     int c; 
    cout<<"Enter a number:";
    cin>>c;
    if(a>=b && a>=c) cout<<a<< "is gretest" ;
    else if(b>=a && b>=c) cout<<b<<"is gretest";
    else  cout<<c << "is gretest";
}