class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int row_val=m;
        int col_val=n;

        for(auto &op: ops){
            row_val=min(row_val, op[0]);
            col_val=min(col_val, op[1]);
        }
        return row_val*col_val;
    }
};