class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool is_word = false;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] != ' ') {
                count++;
                is_word = true;
            }
            if(s[i] == ' ' && is_word) return count; 
        }
        return count;
    }
};
