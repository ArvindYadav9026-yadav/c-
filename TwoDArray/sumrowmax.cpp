#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][4]={{5,8,1,2},{8,4,6,2},{3,5,7,3}};
    int MaxroW =-1, maxSum = INT_MIN;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxSum){
            maxSum =sum;
            MaxroW=i;
        }
    }
    cout<<MaxroW<<" "<<maxSum;
}