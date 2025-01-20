// LC-136

// xor ^ of 2 same nos =0
//  and xor of unique no with 0 = number itself

// 2 ^ 3 ^ 8 ^ 3 ^ 2 = 8

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int xorr=nums[0];
        for(int i=1;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        return xorr;

    }
};