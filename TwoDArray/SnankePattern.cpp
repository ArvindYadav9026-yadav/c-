#include<iostream>
using namespace std;
int main(){
     int arr[3][4]={{6,8,1,7},{8,0,6,6},{3,7,7,3}};

        for(int i=0; i<3;i++){
            if(i%2==0){

            for(int j=0 ;j<4; j++){
            cout<<arr[i][j];
        }
       
    }
    else{
         for(int j=3;j>=0; j--){
            cout<<arr[i][j];
    }
}
}
}

    
  
        
    

