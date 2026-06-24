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

