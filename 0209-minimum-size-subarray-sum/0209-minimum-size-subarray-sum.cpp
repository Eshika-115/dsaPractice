class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_sub = INT_MAX;
        int i =0;
        int sum=0;
        int n =nums.size();
  //ex--   2 3 1 2 4 3
  //       i
  //       j
     // sum= 0+2=2
     // sum =2+3=5
     // sum= 5+1=6
     //sum= 6+2=8
        for(int j=0;j<n;j++){
            sum=sum+nums[j];
        
      // 2>= 7   false
      //5>=7  false
      //6>=7 false
      
        // j++
        //j point to index 1
        //j points to index2
        //j points to index 3
         //8>=7 true
         //min = min(INT _MAX,3-0+1)=4
         //sum= 8 - 2=6
         //i++;
        while(sum>=target){
            min_sub = min(min_sub,j-i+1);
        
            sum = sum-nums[i];
             i++;
        }
        

    }
     return (min_sub==INT_MAX) ? 0 : min_sub;
}
};