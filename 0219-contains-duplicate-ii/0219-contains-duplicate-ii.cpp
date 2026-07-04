class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> st;

        // Initial window
        for (int i = 0; i < min((int)nums.size(), k + 1); i++) {
            if (st.count(nums[i])) {
                return true;
            }
            st.insert(nums[i]);
        }

        // Slide the window
        for (int i = k + 1; i < nums.size(); i++) {
            st.erase(nums[i - k - 1]);

            if (st.count(nums[i])) {
                return true;
            }

            st.insert(nums[i]);
        }

        return false;
    }
};