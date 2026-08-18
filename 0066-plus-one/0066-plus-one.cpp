class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

       // case 2,4,5
        for(int i =digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }

        digits[i]=0;
        }
        // case [9,9,9]
        vector<int> ans(digits.size()+1,0);
        ans[0]=1;
        return ans;
        
       // digits.insert(digits.begin(),1);
        //return digits;
    }
};