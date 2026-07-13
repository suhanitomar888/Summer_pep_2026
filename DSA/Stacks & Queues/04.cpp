
// https://leetcode.com/problems/valid-parentheses/
/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch:s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                if(ch==')' && top=='(' || ch=='}' && top=='{' || ch==']' && top=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }

        }
        return st.empty();
    }
};*/


// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1
/*
class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x){
        //base case
        if(st.empty()){
            st.push(x);
            return st;
        }
        int topVal=st.top();
        st.pop();
        st.insertAtBottom(st,x);
        st.push(topVal);
        
        return st;
    }
};
*/

// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246
/*
void deleteMiddle(stack<int>&inputStack, int N){
   //base case: if input st is empty or count ==size/2
   //pop the top ele and return
}
*/

// https://leetcode.com/problems/min-stack/description/

void push(int value){
    minstack.push(val);
    f(minStack.empty() || val <= midStack.top()){
        minStack.push(val);
    }
    else{

    }
}

//implement queue using stack
//stack using queue
//Queue Reversal
//