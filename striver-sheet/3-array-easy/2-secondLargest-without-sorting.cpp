class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int max =INT_MIN,max2=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max2=max;
                max=arr[i];
            } 
            else if(arr[i]>max2 && arr[i]!=max){
                max2=arr[i];
            }
        }
        
        if(max2==INT_MIN){
            return -1;
        }
        
        return max2;
        
    }
};