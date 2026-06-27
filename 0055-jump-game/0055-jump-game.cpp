class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_reachable = 0; // Hum maximum kahan tak pahunch sakte hain
        
        for (int i = 0; i < n; i++) {
            // Agar current index tak hum pahunch hi nahi sakte
            if (i > max_reachable) {
                return false;
            }
            
            // Galti 2: Har step par max reach ko update karo (Loop ke andar)
            max_reachable = max(max_reachable, i + nums[i]);
            
            //  Agar max reach last index tak ya usse aage chali gayi
            if (max_reachable >= n - 1) {
                return true;
            }
        }
        
        return false; 
    }
};