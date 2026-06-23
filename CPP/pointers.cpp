#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a; //pointer variable which stores the address of a
    cout<<a<<endl;
    cout<<&a<<endl; //address of a
    cout<<ptr<<endl; //address of a
    cout<<*ptr<<endl; //value of a, this is called dereferencing the pointer
    //whenever you reate a pointer variable, it is always a good practice to initialize it with NULL or something, 
    //because if you don't initialize it, it will point to some random address and if you dereference it, 
    //it will give you garbage value or segmentation fault. Never leave it dangling. Never make a wild pointer. 
    //Always initialize it with NULL or something.
    //new keyword in c++ is used to allocate memory dynamically at runtime. It returns a pointer to the allocated memory.
    //in heap memory. The memory allocated by new keyword is not automatically deallocated when the variable goes out of scope.
    //It is the responsibility of the programmer to deallocate the memory using delete keyword. If you don't deallocate the memory,
    //it will lead to memory leak. Memory leak is a situation where the memory allocated by new keyword is not deallocated and 
    //it is not accessible anymore. It will lead to wastage of memory and eventually your program will run out of memory and crash. 
    //So always deallocate the memory using delete keyword when you are done with it.
    
    
    //the syntax of new keyword is:
    // data_type *ptr = new data_type; //allocates memory for data_type and returns a pointer to it
    //*ptr because ptr is a pointer variable which stores the address of the allocated memory. *ptr is used to dereference the pointer and access the value stored in the allocated memory.

}