class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int old, int color){
        int m=image.size();
        int n=image[0].size();

        if(sr<0 || sr>=m || sc<0 || sc>=n) return;

        if(image[sr][sc]!=old) return;

        image[sr][sc]=color;

        dfs(image, sr - 1, sc, old, color);
        dfs(image, sr + 1, sc, old, color);
        dfs(image, sr, sc - 1, old, color);
        dfs(image, sr, sc + 1, old, color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old=image[sr][sc];

        if(old==color) return image;

        dfs(image, sr, sc, old, color);
        return image;
    }
};