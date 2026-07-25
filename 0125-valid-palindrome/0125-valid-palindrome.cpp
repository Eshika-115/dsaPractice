class Solution {
public:

bool Is_Alpha_num(char ch){

    if((ch>= '0' && ch<= '9') || (tolower(ch)>= 'a' && tolower(ch)<='z' )){
        return true;
    }
    return false;

}
    bool isPalindrome(string s) {
        int i =0;
        int j =s.length()-1;

        while(i<j){
            if(!Is_Alpha_num(s[i])){
                i++;
                continue;
            }
            if(!Is_Alpha_num(s[j])){
                j--;
                continue;
        }

        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
        }
        return true;
    }
};