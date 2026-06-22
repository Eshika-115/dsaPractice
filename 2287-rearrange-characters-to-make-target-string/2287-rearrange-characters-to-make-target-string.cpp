class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> freqS(26,0);
        vector<int> freqT(26,0);
          // s ke sarecharacter count kre
        for(char ch : s){
            freqS[ch - 'a']++;
        }
// target ke sare character count kre
        for(char ch : target){
            freqT[ch - 'a']++;
        }

        //answer ke liye
        int ans= INT_MAX;

        for(int i =0;i<26;i++){
            if(freqT[i]>0){
                ans=min(ans, freqS[i]/freqT[i]);
            }
           
        } return ans ;
    }
};