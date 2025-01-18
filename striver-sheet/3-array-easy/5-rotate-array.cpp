// APPROACH 1 : 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k = k % n;
        if (k == 0) return; 

        // 1st part: Copy the first (n-k) elements into a temporary vector
        vector<int> cp(n - k);
        for (int i = 0; i < n - k; i++) {
            cp[i] = nums[i];
        }

        // 2nd part: Move the last k elements to the beginning of the array
        for (int i = 0; i < k; i++) {
            nums[i] = nums[n - k + i];
        }

        // 3rd part: Append the copied elements from the temporary vector
        for (int i = 0; i < cp.size(); i++) {
            nums[k + i] = cp[i];
        }

    }
};


// APPROACH 2 : reversal of entire, then subparts, first k elems, then k to last elem.
// imp : k = k % nums.size(); else overflow smtg.

#include<algorithm>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }
};