//Data types and Variables
#include<iostream>
using namespace std;
//int main(){
    // int age=10;
    // char name='A';
    // bool ans=true;

    //int -> 4 byte
    //long long -> 8 byte
    //float -> 4 byte
    //double -> 8 byte

    //char -> 1 byte (2 in java)
    //bool -> 1 byte 

    //cout<<age<<endl;

    //---------------------------------------------------

    //Conditional Statements
    //if(cond.){
        //if cond is true,this block will be executed
    //}
    //else{
        //otherwise this block will be executed
    //}

    //else-if
    //switch
    // char grade='A';
    // switch(grade){
    //     case 'A':
    //         cout<<"Excellent"<<endl;
    //         break;
    //     case 'B':
    //         cout<<"Good"<<endl;
    //         break;
    //     case 'C':
    //         cout<<"Average"<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid grade"<<endl;
    // }

    //ternary operator
    // int age=20;
    // string ans=(age>18)?"Eligible":"Not Eligible";
    // cout<<ans<<endl;

    // int x=10,y=20;
    // int max=(x>y)?x:y;
    // cout<<max<<endl;

    //print sqaure of 4*4 stars pattern
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //for loop

    // for(init ; terminate ; inc/dec){
    //     //code to be executed
    // }
    //cout<<"Alright I'm, trying to understand some git here";

    //functions
// void func1(int num){
//     cout<<"Value of num is: "<<num<<endl;
// }
// int func2(int num){
//     int ans=2*num;
//     return ans;
// }
// int main(){
//     func1(10);
//     cout<<func2(10)<<endl;
// }

void doubleTheNumber(int num){
    num*=2;
    cout<<"inside the function :"<<num<<endl;
}
//if & then original value of num will be changed,otherwise a copy of num will be created and the original value will remain unchanged
int main(){
    int num=10;
    doubleTheNumber(num);
    cout<<"outside the function :"<<num<<endl;
}
//}
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     int number;
//     cin>>number;
//     if(age>18 && number>10){
//         cout<<"You are eligible"<<endl;
//     }
//     else{
//         cout<<"You are not eligible"<<endl;
//     }
// }