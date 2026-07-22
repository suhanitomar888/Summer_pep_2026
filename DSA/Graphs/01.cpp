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