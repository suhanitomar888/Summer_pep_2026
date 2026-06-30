//head nd tail recursion

#include<iostream>
using namespace std;

void print(int n){
    if(n==10){
        return;
    }
    cout << n << " ";
    print(n+1);
}
void printReverse(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    printReverse(n-1);
}
int main(){
    print(1);
    return 0;
}

// factorial uisng recursion
int factorial(int n){if(n==0){
     if(n==0 ||n==1)return 1;
    return n * factorial(n-1);
}

// fibonacci using recursion
//Recusion

bool binarySearch(int arr[], int l, int r, int key){
    //base case->
    //int mid
    //if(arr[mid]==key)return true;
    //else if(arr[mid]<key){
    //}
    //else{
    //}

    if(l>r){
        return false;
    }
    int mid=l+(r-l)/2;
    if(arr[mid]==key){
        return true;
    }else if(arr[mid]>key){
        return binarySearch(arr,l,mid-1,key);
    }else{
        return binarySearch(arr,mid+1,r,key);
    }
}
//check if array is sorted or not using recursion
bool isSorted(int arr[], int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    return isSorted(arr,n-1);
}

// 2D- Array
//traversal
int[3][4]
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
//     for(int i=0;i<3;i++){
//         for(int j=0;i<34;i++){
//             cin>>arr[j][i];
//         }
//     }
// }

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//print all the columns in the even columnn of the 2 array
void printEvenColumn(int arr[4][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j%2==0){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
//print all emements in the odd row of the 3D arr;
void printOddColumn(int arr[4][4],int row,int col){
    int main(){
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                if(j%2!=0);
                cout<<arr[i][j];<<" ";
            }
        }
    }       
}