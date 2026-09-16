#include<iostream>
using namespace std;
int main(){
    int n;
     cout<<"Enter a Numnber of Terms :";
      cin>>n;
      int m = n;
      int rev=0;
      int sum =0;
      while(n!=0){

        int lastDigit =n%10;
       
        rev =rev*10+lastDigit;
         
        n=n/10;
      }
       

        
        
        
      
      sum =rev+m;
      
      cout<<sum<<endl;
      
   
      
     
    }