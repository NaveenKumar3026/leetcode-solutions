class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);
        vector<bool> visited(26, false);
        string res="";

        for(char c: s) freq[c-'a']++;

        for(char c: s){
            freq[c-'a']--;

            if(visited[c-'a']) continue;

            while(!res.empty() && res.back()>c && freq[res.back()-'a']>0){
                visited[res.back()-'a']=false;
                res.pop_back();
            }
            res.push_back(c);
            visited[c-'a']=true;
        }
        return res;
    }
};