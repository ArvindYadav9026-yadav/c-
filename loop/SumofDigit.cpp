#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter a Numnber of Terms :";
      cin>>n;
      int rem =0;
      int sum=0;
      while(n!=0){
        rem=n%10;
        
        sum=sum+rem;
        n=n/10;

      }
      cout<<sum;

}