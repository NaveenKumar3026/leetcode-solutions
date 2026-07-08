class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=0;
        int curr=1;
        int val=0;

        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) curr++;
            else{
                val+=min(curr, prev);
                prev=curr;
                curr=1;                
            }
        }
        val+=min(curr, prev);
        return val;
    }
};