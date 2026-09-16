#include<iostream>
using namespace std;
int fact( int x){
    int fact=1;
    for(int i=1; i<=x; i++){
       fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number";
    int r;
    cout<<"Enter a number r";
    cin>>n>>r;
  
    cout<<(fact(n))/(fact(r)*fact(n-r))<<endl;
    

}