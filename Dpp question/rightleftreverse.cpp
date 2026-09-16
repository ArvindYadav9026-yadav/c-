#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
 for(int ele: arr)
  cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr ={1,2,3,4,5};
    int n = arr.size();
    int i=0,j=n-1;
    if((i+j)%2!=0){
       
   int swapt=arr[i];
    arr[i]= arr[j];
    arr[j]=swapt;
    i++;
    j--;
    
    }
    print(arr);

    
    }




    