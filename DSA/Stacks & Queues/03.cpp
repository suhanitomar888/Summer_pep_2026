//Queue
/*
#include<iostream>
using namespace std;
class MyQueue{
    public:
    int * arr;
    int front;
    int rear;
    int size;

    //constructor of queue means initializing the queue
    MyQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    //push operation of queue           
    void enqueue(int val){
        if(rear==size-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }
    //pop operation of queue
    void dequeue(){
        if(front==-1){
            cout<<"Queue Underlow"<<endl;
            return;
        }
        rear--;
        if(rear<front){
            front=-1;
            rear=-1;
        }
    }
}
    */

// Reverse a string using stack

#include<iostream>
#include<stack>
using namespace std;
void reverseString(string str){
    stack<string> st;

    for(int i=0;i<str.length();i++){
        string ans= " ";
        while(str[i]!=' ' && i<str.length()){
            ans+=str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
//20 lc- Valid Parentheses
