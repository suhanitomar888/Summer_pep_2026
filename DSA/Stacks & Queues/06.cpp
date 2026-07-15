//735 lc
//circular queue
#include<iostream>
using namespace std;
class MyCircularQueue {
    vector<int> data;
    int front;
    int rear;
    int size;
    int count;

    MyCircularQueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        count=0;
        
    }