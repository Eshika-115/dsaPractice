class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j =0;
         int countzeros=0;
        int maxlength=0;

        while(j<nums.size()){
            if(nums[j]==0){
            countzeros++;

        }
        j++;
        while(countzeros>k){
            if(nums[i]==0){
                countzeros--;
            }
            i++;
        }
        maxlength = max(maxlength, j-i);

    }
    return maxlength;
    }
};