class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mp;
        unordered_map<string, char> rev;

        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {

            if (i == pattern.size())
                return false;

            char ch = pattern[i];

            if (mp.count(ch) && mp[ch] != word)
                return false;

            if (rev.count(word) && rev[word] != ch)
                return false;

            mp[ch] = word;
            rev[word] = ch;

            i++;
        }

        return i == pattern.size();
    }
};