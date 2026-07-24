class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
        int j=0;
        int n =s.size();
        unordered_set<int>st;
        int max_ans=0;
        while(j<n){
            char c=s[j];
            while(st.count(c)){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            max_ans=max(max_ans,j-i+1);
            j++;
        }
        return max_ans;
    }
};