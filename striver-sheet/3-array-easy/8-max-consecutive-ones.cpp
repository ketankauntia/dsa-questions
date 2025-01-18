// LC-485

//iterate using single pointer. if we find one, count++
// else we found a zero, then we compare the count & maxCount

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                count+=1;
            } else{
                if(count>maxCount){
                    maxCount = count;
                }
                count=0;
            }
        }

        // Check for the last sequence of ones
        if(count > maxCount) {
            maxCount = count;
        }
        
        return maxCount;
    }
};