//LC-1752
// count no of pairs. if pairs exceed 1 then not true

// line 21 edge case imp. 
// where last element != first element. else it will break the ascending nature of the array. hence not sorted.
// also, pair count should be == 1 in this case, else actual ascending array's without breaks will get negative.

class Solution {
public:
    bool check(vector<int>& nums) {
        
        //count no of sequence breaks.

        int seq=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                seq++;
                if(seq>1){
                    return false;
                }
            }
        }
        //comparison of last and 1st element
        if(nums[nums.size()-1]>nums[0] && seq ==1){
            return false;
        }
        return true;

    }
};