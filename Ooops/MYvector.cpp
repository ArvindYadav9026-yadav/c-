#include<iostream>
using namespace std;
class MyVector{// User define vector
    private:
          int length;
    int* arr;
    int cap;
    
    public:
   
    MyVector(int capacity,int default_value){
      length=cap=capacity;
        arr=new int[capacity];
        for(int i=0;i<capacity;i++){
            arr[i]=default_value;

        }

    }
    void pop_back(){
        if(length==0) {
            cout<<"Vdector is Empty!"<<endl;
            return;
        }
        length--;
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void push_back(int value){
        if(length==cap){
            // double capacity
            cap=2*cap;
            int* temp=new int [cap];
            for(int i=0;i<length;i++){
                temp[i]=arr[i];
            }
            delete[] arr;
            arr=temp;

        }
      
        arr[length]=value;
        length++;

    }
    void display(){
         for(int i=0;i<length;i++){
            cout<<arr[i]<<"";

        }
        cout<<endl;
    }
    int get(int idx){
        if(idx<0||idx>=length){
            cout<<"index out of bound"<<endl;
            return;
        }
        return arr[idx];
    }
   void set(int index,int value){
    arr[index]=value;
   }
        
    

};
int main(){
    MyVector v(5,-1);
    cout<<v.size();
    cout<<v.capacity();
    v.display();
    v.pop_back();
    v.push_back(10);
    v.display();
    v.push_back(20);
    v.display();
    cout<<v.get(2)<<endl;
    v.set(2,120);
//int arr[5];
    // int*a =new int[5];
    // a[0]=10;
    //  a[1]=20;

    //  int b[]={67,21};
    // int* arr=b;
    //  cout<<arr[0];

}