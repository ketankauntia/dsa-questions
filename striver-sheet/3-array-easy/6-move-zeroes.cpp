// LC-283

//approach 1 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //we first find the zero elem in the array
        //if not found return immediatly
        // if found, then simply swap the found zero with the
        //non-zero integer

        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                idx=i;
                break;
            }   
        }

        if(idx==-1) return;

        for(int i=idx+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[idx]);
                idx++;
            }
        }
    }
};

//approach 2 :easier

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //taking 2 pointers
        //swap every 1st zero with the upcoming non-zero elements
        // meaning, push all non-zeros to front, 
        //till the 2nd pointer reaches the end.

        int ptr1=0, ptr2=0;

        while(ptr2!=nums.size()){
            if(nums[ptr2]!=0){
                swap(nums[ptr1],nums[ptr2]);
                ptr1++;
            }
            ptr2++;
        }

    }
};