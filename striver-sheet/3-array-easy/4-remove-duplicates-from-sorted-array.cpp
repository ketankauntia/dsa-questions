//LC-26

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //take 2 pointers and compare and move
        //remove duplicates


        if(nums.size()==1){
            return 1;
        }

        int ptr1=0,ptr2=0;
        while(ptr2!=nums.size()){
            if(nums[ptr1]==nums[ptr2]){
                ptr2++;
            } else if(nums[ptr1]!=nums[ptr2]){
                ptr1++;
                nums[ptr1]=nums[ptr2];
                ptr2++;
            }
        }

        return ptr1+1;
    }
};