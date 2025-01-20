// mp.find(key) searches for the key in the map:

// If the key exists, it returns an iterator pointing to the key-value pair in the map.
// If the key does not exist, it returns an iterator equal to mp.end().

//mp.end() means it creating a new space after the last occurance in the map

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        int sum=0, length=0;
        map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                // why i+1? -> we counting from 0 & we are totaling from
                // begining. so everthing is wrt begining.
                // sum is also from begining
                length = max(length, i+1);
            }

            // checking if value not in map, adding it.
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }

            // If sum-k exists in the map, it means there is a prefix sum earlier in the array whose value is current sum − 𝑘.
            if(mp.find(sum-k)!= mp.end()){
                length = max(length,i-mp[sum-k]);
            }
            
        }
        return length;
        
    }
};