//lc 733
/*
class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& image, int originalColor, int newColor){
        int n=image.size();
        int m=image[0].size();

        if(r<0 || r>=n || c<0 || c>=m)return;
        if(image[r][c] != originalColor)return;
        image[r][c]=newColor;

        dfs(r-1, c, image, originalColor, newColor); //top
        dfs(r+1, c, image, originalColor, newColor); //bottom
        dfs(r, c-1, image, originalColor, newColor); //left
        dfs(r, c+1, image, originalColor, newColor); //right
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor=image[sr][sc];
        if(originalColor==color)return image;
        dfs(sr, sc, image, originalColor, color);
        return image;
    }
};*/

// https://www.geeksforgeeks.org/problems/topological-sort/1
/*
class Solution {
  public:
    void dfs (int node, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st) {
        visited[node] = true;
        
        for(auto neighbour : adj[node]) {
            if(!visited[neighbour]) {
                dfs(neighbour, adj, visited, st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto i : edges ) {
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        stack<int> st;
        for(int i=0; i<V; i++) {
            if(!visited[i]) {
                dfs(i, adj, visited, st);
            }
        }
        vector<int> res;
        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};
*/