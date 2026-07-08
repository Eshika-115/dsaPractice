class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        if (s.size() < 10)
         return {};

         
        unordered_set<string> seen;
        unordered_set<string> result;

        for(int i =0;i<=s.size()-10;i++){
             
             string dna= s.substr(i,10);

             if(seen.count(dna)){
                result.insert(dna);
             }
             seen.insert(dna);

        }

        return vector<string>(result.begin(),result.end());
    }
};