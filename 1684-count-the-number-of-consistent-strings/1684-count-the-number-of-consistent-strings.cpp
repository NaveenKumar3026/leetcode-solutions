class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int accepted_letter[26]={0};
        int count=0;
        for(char c: allowed) accepted_letter[c-'a']=1;

        for(string word: words){
            bool valid = true;

            for(char c: word){
                if(!accepted_letter[c-'a']){
                    valid=false;
                    break;
                }
            }
            if(valid) count++;
        }
        return count;
    }
};