class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i!=0) continue;

            string str=s.substr(0, i);
            string t="";
            while(t.size()<n) t+=str;

            if(t==s) return true;
        }
        return false;
    }
};