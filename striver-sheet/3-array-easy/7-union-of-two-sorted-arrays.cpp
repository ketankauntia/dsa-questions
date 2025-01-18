class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        vector<int> newArr;

        //keep 2 pointers both at start of the array
        //runs till either reaches teh end
        //then we push the rest of the elements from both the array

        int ptr1=0,ptr2=0;
        while(ptr1<a.size() && ptr2<b.size()){
            if(a[ptr1]<=b[ptr2]){

                // if newArray is already empty, then we push
                // if newArray's previous element is different only then we push to avoid duplicates, 
                
                // same at the end when push the leftover elements

                if(newArr.size()==0 || newArr.back()!=a[ptr1]){
                    newArr.push_back(a[ptr1]);
                }
                ptr1++;
            } else {
                if(newArr.size()==0 || newArr.back()!=b[ptr2]){
                    newArr.push_back(b[ptr2]);
                }
                ptr2++;
            }
        }
        
        while (ptr1 < a.size()) {
            if (newArr.empty() || newArr.back() != a[ptr1]) {
                newArr.push_back(a[ptr1]);
            }
            ptr1++;
        }

        while (ptr2 < b.size()) {
            if (newArr.empty() || newArr.back() != b[ptr2]) {
                newArr.push_back(b[ptr2]);
            }
            ptr2++;
        }
        return newArr;
        
    }
};