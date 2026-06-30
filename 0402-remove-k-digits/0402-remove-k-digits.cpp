class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(char ch: num){
            while(!st.empty() && k>0 && st.top()>ch){
                st.pop();
                k--;
            }
            st.push(ch);
        }
        while(k>0){
            st.pop();
            k--;
        }
        string val;
        while(!st.empty()){
            val+=st.top();
            st.pop();
        }

        reverse(val.begin(), val.end());

        int i=0;
        while(i<val.size() && val[i]=='0') i++;
        val = val.substr(i);

        if(val=="") return "0";

        return val;
    }
};