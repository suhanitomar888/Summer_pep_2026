#include<iostream>
using namespace std;

class MyStack{
    int *arr;
    int top;
    int size;

    MyStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(top == size -1){
            cout << "Stack overflow " << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top == -1){
            cout << "Stack underflow " << endl;
            return;
        }
        top--;
    }

    //bool isempty
    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    //peek
    void peek(){
        if(top == -1){
            cout << "Stack is empty " << endl;
            return;
        }
        cout << arr[top] << endl;
    }

    //size
    void getsize(){
        cout << "Size of stack is: " << top + 1 << endl;
    }

};

int main(){
    MyStack s(5);
    s.push(5);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
}