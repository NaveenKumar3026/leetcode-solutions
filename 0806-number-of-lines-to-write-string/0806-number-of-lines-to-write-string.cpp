class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines=1;
        int curr=0;

        for(char ch: s){
            int w=widths[ch-'a'];

            if(curr+w<=100) curr+=w;
            else{
                curr=w;
                lines++;
            }
        }
        return {lines, curr};
    }
};