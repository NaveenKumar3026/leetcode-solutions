class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        int n=num1.length(), m=num2.length();
        vector<int> res(n+m, 0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int val = (num1[i]-'0')*(num2[j]-'0');
                int h=i+j+1;
                int l=i+j;
                int value=val+res[h];
                res[h]=value%10;
                res[l]+=value/10;
            }
        }
        string res1;
        for(int num: res){
            if(res1.empty() && num==0) continue;
            res1+=(num+'0');
        }
        return res1;
    }
};