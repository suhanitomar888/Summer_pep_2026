#include<iostream>
#include<string>

using namespace std;

//using pointers

string reverseString(string str){
    // int a= str.begin();
    // int b= str.end()-1;
    // while(a<b){
    //     swap(*a,*b);
    //     a++;
    //     b--;
    // }
    // return str;

    int l=0, r=s.length()-1;
    while(l<r){
        swap(s[l++],s[r++]);
        l++;
        r--;
    }
}
int main(){
    string str="Hello";
    cout<<reverseString(str)
];

}