class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_reach = 0; // Hum maximum kahan tak pahunch sakte hain
        
        for (int i = 0; i < n; i++) {
            // Agar current index tak hum pahunch hi nahi sakte
            if (i > max_reach) {
                return false;
            }
            
            // Har step par max reach ko update karo 
            max_reach = max(max_reach, i + nums[i]);
            
            //  Agar max reach last index tak ya usse aage chali gayi
            if (max_reach >= n - 1) {
                return true;
            }
        }
        
        return false; 
    }
};