// https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
/*
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        //run a loop on size of array{
            //if(the ith element is greater than largest){
                //update the largest
            //}
            //return largest
        //}
        
        int l= INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        return l;
    }
};
*/

// https://www.geeksforgeeks.org/problems/second-largest3735/1
/*
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l=INT_MIN;
        int sl=INT_MIN;
        
        for(int i:arr){
            if(i>l){
                sl=l;
                l=i;
            }
            else if(i>sl && i<l){
                sl=i;
            }
        }
        return sl==INT_MIN ? -1:sl;
    }
};
*/

//https://leetcode.com/problems/max-consecutive-ones/
/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxCount=max(count,maxCount);
            }
            else{
                count=0;
            }
        }
        return maxCount;
    }
};
*/

//Question:
//int arr[]={3,5,1,12,36,32,4}; key=12
//find that key in array using linear search
//if the key is found and value of key is >10
//then return double the of the key
//otherwise return the half value of the key
/*
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,5,1,12,36,32,4};
    int key=12;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            if (key > 10) {
                cout << key * 2;
            } else {
                cout << key / 2;
            }
        }
    }
}
*/

/*Time complexity -> how much time an algo takes as input size increases

Big O -> represents the upper bound of running time, it gives the worst case scenario of an algorithm,
it describes the maximum time an algorithm can take

Big O(1) -> when input is known and the time taken is constant, it does not depend on input size
Big O(n) -> linear time - the time grows directly proportional to input size
for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
        //code
    }
}
    tc=O(n*5) = O(n) -> linear time

*/