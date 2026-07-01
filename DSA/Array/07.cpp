//head nd tail recursion

// #include<iostream>
// using namespace std;

// void print(int n){
//     if(n==10){
//         return;
//     }
//     cout << n << " ";
//     print(n+1);
// }
// void printReverse(int n){
//     if(n==0){
//         return;
//     }
//     cout << n << " ";
//     printReverse(n-1);
// }
// int main(){
//     print(1);
//     return 0;
// }

// // factorial uisng recursion
// int factorial(int n){if(n==0){
//      if(n==0 ||n==1)return 1;
//     return n * factorial(n-1);
// }

// // fibonacci using recursion
// //Recusion

// bool binarySearch(int arr[], int l, int r, int key){
//     //base case->
//     //int mid
//     //if(arr[mid]==key)return true;
//     //else if(arr[mid]<key){
//     //}
//     //else{
//     //}

//     if(l>r){
//         return false;
//     }
//     int mid=l+(r-l)/2;
//     if(arr[mid]==key){
//         return true;
//     }else if(arr[mid]>key){
//         return binarySearch(arr,l,mid-1,key);
//     }else{
//         return binarySearch(arr,mid+1,r,key);
//     }
// }
// //check if array is sorted or not using recursion
// bool isSorted(int arr[], int n){
//     if(n==1 || n==0){
//         return true;
//     }
//     if(arr[n-1]<arr[n-2]){
//         return false;
//     }
//     return isSorted(arr,n-1);
// }

// 2D- Array
//traversal
