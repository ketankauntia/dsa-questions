// LC-2149

// best approach in 1 iteration.
// copy +ve elements to even indexes & -ve to odd indexes in new array
// then return that vector

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        int posIdx=0,negIdx=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){   //+ve
                ans[posIdx]=nums[i];
                posIdx+=2;
            } else{
                ans[negIdx]=nums[i];
                negIdx+=2;
            }
        }
        return ans;
    }
};