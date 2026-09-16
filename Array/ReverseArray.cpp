#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele: arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
   
    
    vector<int> arr ={1,2,3,4,5};
    print(arr);
    
    int i=0;
    int j=arr.size()-1;
  

    
    while(i<j){
   int swapt=arr[i];
    arr[i]= arr[j];
    arr[j]=swapt;
    i++;
    j--;
    }
   

print(arr);

}


