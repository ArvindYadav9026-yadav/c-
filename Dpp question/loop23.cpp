#include<iostream>
using namespace std;
int main(){
    
     
    for(int i=1; i<=1000; i++){
       int num=i;
       int sum=0;
       while(num>0){
     int   rem=num%10;
       sum=sum+rem;
       num=num/10;
       }
       
       if(sum==17){
        cout<<i<<" ";
     
        
        
       
    }
       
    }
}
