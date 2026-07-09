class Solution {
public:
    bool isVowel(char c) {

        return c == 'a' || c == 'e' || c == 'i' ||  c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int count = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }

        int ans = count;

        // Slide kr diya window 
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i - k])) {
                count--;
            }

      if (isVowel(s[i])) {
                count++;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};