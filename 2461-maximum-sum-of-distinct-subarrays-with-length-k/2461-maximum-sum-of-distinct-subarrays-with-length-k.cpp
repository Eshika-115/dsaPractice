class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int ,int> mp;
        long long sum=0;
        long long max_sum=0;
        int dups=0;
        int n =nums.size();

        for(int i =0;i<k;i++){
             mp[nums[i]]++;

            if(mp[nums[i]]==2){
                dups++;
            }

            sum= sum + nums[i];
        }
            if(dups==0){
                max_sum= max(max_sum,sum);
            }
    
            //remaining element

        for(int i=k;i<n;i++){

                //add
                int add= nums[i];
                int remove = nums[i-k];

                mp[add]++;


                if(mp[add]==2){
                    dups++;
                }
                    sum= sum + add;


                //remove i-k element

                if(mp[remove]==2){                    
                    dups--;
                }
                    mp[remove]--;
                     

                     if(mp[remove]==0){
                        mp.erase(remove);
                     }

                     sum= sum - remove;
                

                if(dups==0){
                    max_sum = max(max_sum, sum);
                }
            
    }
            return max_sum;

        
    }
};