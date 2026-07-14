//nge, nse, pge, pse
//nge-1 lc496, lc 84 




// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1
/*
class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        stack<int> st;
        int halfSize= q.size()/2;
        
        //push the first half elements in stack
        //queue: 16,17,181,9,20 || stack: 15, 14 13, 12, 11
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
        }
        
        //enqueue back the stack elements in queue
        //queue: 16 17 18 19 20 15 14 13 12 11
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        //dequeue the first half elements of queue and enqueue them back
        for(int i=0;i<halfSize;i++){
            q.push(q.front());
            q.pop();
        }
        
        //again push the first half elements in stack
        //queue: 16 17 18 19 20 || stack: 11 12 13 14 15
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
        }
        
        //interleave 
        for(int i=0;i<halfSize;i++){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};
*/

// prefix
/*
#include<iostream>
#include<stack>
using namespace std;

int prefixEval(string s)
{
    //create a stack


    //traverse from right to left

    //if s[i] is operand then push in the stack

    //else if it is operator -->create 2 variables to store 2 elements

    //pop them and evaluate with operator, then push the resultant back in stack

    //return the last remaining elementfrom stack-->it is answer

    stack<int>st;

    for(int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            }
        }
    }
}
*/
