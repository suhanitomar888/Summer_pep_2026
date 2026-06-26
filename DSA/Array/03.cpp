// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                return {i+1, j+1};
            }else if(sum<target)i++;
            else j--;
        }
        return {};
    }
};
*/

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ 
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0;
        int bestBuy= prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxProf=max(maxProf,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxProf;
    }
};
*/

// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
/*
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target){
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target)return true;
                else if(sum<target)j++;
                else k--;
            }
        }
        return false;
    }
};
*/

// https://leetcode.com/problems/merge-sorted-array/description/






//removeDuplicates