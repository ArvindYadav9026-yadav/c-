#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Numnber of Terms :";
    cin>>n;
    bool flag = false; // false means prime number  
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            flag = true;
            break;
        }
    }
    if(n==1) cout<<"Nither Prime nor Composite";
  else if(flag==true) cout<<"composite Number";
    else cout<<"Prime Number";
}



