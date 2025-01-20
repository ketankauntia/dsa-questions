//  LC-75

//dutch national flag sorting algo
// 0 to low-1, low to mid-1, mid to high, high+1 to n-1 

//(n=arr.size)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            } else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            } else{
                mid++;
            }
        }

    }
};