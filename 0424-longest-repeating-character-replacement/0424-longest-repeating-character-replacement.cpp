class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int left=0;
        int val=0;
        int change=0;

        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            val = max(val, freq[s[right]-'A']);
            while((right-left+1)-val>k){
                freq[s[left]-'A']--;
                left++;
            }
            change = max(change, right-left+1);
        }
        return change;
    }
};