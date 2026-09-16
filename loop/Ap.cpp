
    
#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter a Numnber of Terms :";
      cin>>n;
    // for(int i=2; i<=3*n-1;i+=3){
    //     cout<<i<<endl;
    // }
    // int a = 2 , d=3;
    // for(int i=1; i<=n; i++){ // n times loop chelega
    //     cout<<a<<" ";
    //     a+=d;
    // }
    // 3 7 11 15
    int a = 3 , d=4;
    for(int i=1; i<=n; i++){ // n times loop chelega
        cout<<a<<" ";
        a+=d;
    }
}