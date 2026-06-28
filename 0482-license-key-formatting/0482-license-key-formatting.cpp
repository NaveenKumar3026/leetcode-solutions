class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp="";
        for(char c: s){
            if(c!='-') temp+=toupper(c);
        }
        int count=0;
        string res;
        for(int i=temp.size()-1;i>=0;i--){
            if(count==k){
                res+='-';
                count=0;
            }
            res+=temp[i];
            count++;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};