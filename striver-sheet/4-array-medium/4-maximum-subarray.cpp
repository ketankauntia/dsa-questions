// LC-53 Kadanes algo

// if adding up of the sum turns negative, then discard it 
// as it will turn the max value lesser
// instead, if it turns sum -ve, start counting from next number.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0, maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){

            currSum+=nums[i];
            if(currSum>maxSum){
                maxSum = currSum;
            }

            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
};