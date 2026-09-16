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
    if(a<=b && a<=c) cout<<a<< "is smalllest" ;
    else if(b<=a && b<=c) cout<<b<<"is smalllest";
    else  cout<<c << "is smalllest";
}