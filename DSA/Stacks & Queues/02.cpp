// all fn of stack are predefined in stack header file
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(5);
    st.push(15);
    st.push(20);

    cout<<"top element: "<<st.top()<<endl;
    //st.pop();

    cout<<st.top()<<endl;
    //cout<<st.size()<<endl;
    //cout<<st.empty()<<endl;
}