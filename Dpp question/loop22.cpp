#include<iostream>
using namespace std;
int main(){
    
    
     
 for(int i=1; i<=500; i++){
    int num=i;
    while(num>0){
        int rem =num%10;
        if(rem==2 || rem==7){
            cout<<i<<" ";
            break;
        }
        num=num/10;
    }
   
    
       
    

    }
}

