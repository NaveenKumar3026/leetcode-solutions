1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4            digits[digits.size()-1] += 1; 
5        for(int i=digits.size()-1; i>=0; i--){
6            if(digits[i]<10) return digits;
7            else{
8                digits[i]%=10;
9                if(i!=0) digits[i-1]+=1;
10                else digits.insert(digits.begin(), 1);
11            } 
12        }
13        return digits;
14    }
15};