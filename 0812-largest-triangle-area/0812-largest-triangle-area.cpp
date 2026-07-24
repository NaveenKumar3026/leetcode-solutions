class Solution {
public:
    double area(vector<int> x, vector<int> y, vector<int> z){
        return abs( x[0] * (y[1] - z[1]) +
            y[0] * (z[1] - x[1]) +
            z[0] * (x[1] - y[1]))/2.0;
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double val=0.0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    val = max(val, area(points[i], points[j], points[k]));
                }
            }
        }
        return val;
    }
};