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
   if(a+b>c && b+c>a && a+c>b ) cout<<"Valid Traingle";
   else cout<<"not valid triangle";
}