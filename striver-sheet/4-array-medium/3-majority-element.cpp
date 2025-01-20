// LC-169
//moores voting algo.

// add freq for same elems, subtract for diff.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int freq=0, currElem=nums[0];
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                currElem=nums[i];
            }
            if(currElem == nums[i]){
                freq++;
            } else{
                freq--;
            }
        }
        return currElem;
    }
};