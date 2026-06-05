class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        while(i<n && s[i]==' ') i++;
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign*=-1;
            i++;
        }
        long long num=0;
        while(i<n && isdigit(s[i])){
            int digit = s[i]-'0';
            if(num*10+digit>INT_MAX){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
            num=num*10+digit;
            i++;
        }
        return sign*num;
    }
};