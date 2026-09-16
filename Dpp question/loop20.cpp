#include<iostream>
using namespace std;
int main(){
int n,original, reverse = 0, rem; 
cout<<"Enter number:";
cin>>n;
original=n;
while(n>0){
    rem =n%10;
    reverse = reverse*10+rem;
    n=n/10;
}
if(original==reverse){
    cout<<"Pallindrome";
}
else{
    cout<<"not a Palindrome";
}
}