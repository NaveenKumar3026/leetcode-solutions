class Solution {
public:
    int findComplement(int num) {
        string val="";

        while(num>=1){
            if(num%2==0) val+="1";
            else val+="0";
            num/=2;
        }
        reverse(val.begin(), val.end());
        int s=val.size()-1;
        int res=0;
        int i=0;
        while(s>=0){
            int k=val[s]-'0';
            res+= k*pow(2,i);
            i++;
            s--;
        }
        return res;
    }
};