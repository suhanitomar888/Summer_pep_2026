#include<iostream>
using namespace std;
class MyStack{
    void push(int val){
        top++;
    }
    void pop(){
        if(top== -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    void peek(){
        cout<<arr[top]<<endl;
    }

    void size(){
        cout<<top+1<<endl;
    }
};