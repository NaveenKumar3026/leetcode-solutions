class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int n=0;
        while(i<s.size()){
            if(n%2==0){
                if(s.size()-i<k) reverse(s.begin()+i, s.end());
                else reverse(s.begin()+i, s.begin()+i+k);
            }
            i+=k;
            n++;
        }
        return s;
    }
};