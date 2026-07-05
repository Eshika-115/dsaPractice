class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

    unordered_set<int> st;

    int n =nums.size();
     for(int i=0;i< min((int)n,k+1);i++){
        if(st.count(nums[i])){
            return true;
        }

        st.insert(nums[i]);
     }

     // slide the window  

     for(int i =k+1; i<n;i++){
        st.erase(nums[i-k-1]);


         if (st.count(nums[i])){
            return true;
         }
         st.insert(nums[i]);
     }

     return false;


        
    }
};