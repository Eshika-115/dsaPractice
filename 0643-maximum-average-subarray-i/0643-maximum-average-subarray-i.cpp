class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int sum=0;
         double max_avg=0;
         int n =nums.size();

         for(int i =0;i<k;i++){
            sum= sum+nums[i];
         }
         max_avg= sum;

          for(int i=k;i<n;i++){
            int add= nums[i];
            int remove = nums[i-k];
            //age wala add krenge 
            sum = sum + add;
             

             //peche se number hatega 
             sum = sum - remove;

             max_avg= max(max_avg, double(sum));
          }

          return max_avg/k;
             }
};