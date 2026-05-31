class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w=sqrt(area);
        int i;
        for(i=w;i>=1;i--){
            if(area%i==0) break;
        }
        int l=area/i;
        return {l,i};
    }
};