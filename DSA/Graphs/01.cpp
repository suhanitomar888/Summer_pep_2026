// (BFS) https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
/*
//created a visited array to keep a track of visited nodes
        //create a queue for bfs traversal
        //start from any node(lets say 0), mark it visited and push it into the queue
        //while(!q.empty){
            //remove the front node
            //add it to the answer
            //visit all unvisited neighbors, mark them visited and oush them in queue
        //return the BFS traversal output
class Solution {
public:
    vector<int> bfs(vector<vector<int>> &adj){
        int V =adj.size();
        vector<int> bfsResult; //store the bfs traversal
        vector<bool> visited(V, false); // keep track of visited nodes
        queue<int>q;
        //start bfs for node 0
        q.push(0);
        visited[0]=true;
        
        //continue until all reachable nodes are visited
        while(!q.empty()){
            int front= q.front();
            q.pop();
            //add current node in answer
            bfsResult.push_back(front);
            
            //visit all neighbors of current node
            for(auto neighbour : adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour] =true;
                    q.push(neighbour);
                }
            }
        }
        return bfsResult;
    }
};*/

// (DFS) https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
/*
//create a visited array to keep track of visite nodes
//start dfs from node 0
//mark current node as visited and add it to the answer
//visit all unvisited neighbour recursilvely
//when all recursive clls finish, return the dfs traversal

class Solution {
  public:
  
    void dfsHelper(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&result){
        //mark the current node a visited
        visited[node]=true;
        //add the current node to answer
        result.push_back(node);
        //visit all unvisited neighbour
        for(auto neighbour: adj[node]){
            if(!visited[neighbour]){
                dfsHelper(neighbour, adj, visited, result);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int V= adj.size();
        vector<bool> visited(V, false);
        vector<int>result;
        dfsHelper(0, adj, visited, result);
        return result;
    }
};
*/

// https://leetcode.com/problems/number-of-provinces/
/*
class Solution {
public:

    void dfsHelper(int city, vector<vector<int>>& isConnected, vector<bool>& isVisited) {
        isVisited[node] = true;

        for (int neighbour = 0; neighbour < isConnected.size(); neighbour++) {
            if (isConnected[node][neighbour] == 1 && !visited[neighbour]) {
                dfsHelper(neighbour, isConnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();

        vector<bool> isVisited(n, false);
        int provinceCount = 0;

        for(int i=0;i<n;i++){
            if(!isVisited[i]){
                //dfsHelper
                provinceCount++;
            }
        }
        return provinceCount;
    }
};
*/

//
