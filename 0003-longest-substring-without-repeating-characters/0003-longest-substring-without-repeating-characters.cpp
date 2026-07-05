class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
        int j=i;
        int n =s.size();
        int long_sub_len=0;
        unordered_set<char> st; 
         while(j<n){
            char c= s[j];
            
         while(st.count(c)){
            st.erase(s[i]);
            i++;
         }
            st.insert(c);
            long_sub_len= max(long_sub_len,j-i+1);
            j++;
         }
         return long_sub_len;
    }
};