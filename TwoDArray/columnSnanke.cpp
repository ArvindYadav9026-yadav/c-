#include<iostream>
using namespace std;
int main(){
     int arr[4][5]={{6,8,1,7,2},{8,0,6,6,4},{3,7,7,3,5},{3,5,6,7,8}};

        for(int j=0; j<5;j++){
            if(j%2==0){
            for(int i=0 ;i<4; i++){
                
            cout<<arr[i][j];
        }
       
    }
     else{
         for(int i=3;i>=0; i--){
            cout<<arr[i][j];
    }
}
}
}