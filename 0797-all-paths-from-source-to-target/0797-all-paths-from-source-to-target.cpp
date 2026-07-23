class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void dfs(vector<vector<int>>& graph, int node){
        path.push_back(node);

        if(graph.size()-1 == node) res.push_back(path);
        else{
            for(int newEdge: graph[node]) dfs(graph, newEdge);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph, 0);
        return res;
    }
};