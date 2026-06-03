class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        for(char ch: word){
            if(isupper(ch)) count++;
        }
        if(count==word.size() || count==0 || (count==1 && isupper(word[0]))) return true;
        return false;
    }
};