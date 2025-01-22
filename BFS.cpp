//
// Created by barra on 1/15/2025.
//

#include <iostream>
#include <vector>
#include <queue>

// BFS is from source s.
void bfs(std::vector<std::vector<int>>&adj, int s){

    // inserted at the back and deleted at the front
    // create queue for BFS
    std::queue<int> q;

    // mark all unvisited
    std::vector<bool> visited(adj.size(), false);

    visited[s] = true;
    q.push(s);

    // iterate over queue
    while(!q.empty()){

        // fetch the first element of queue
        int curr = q.front();
        q.pop();
        std::cout << curr << std::endl;

        // processing all neighbors of s
        for(int i : adj[curr]){
            
        }


    }
}

// undirected graph
void addEdges(std::vector<std::vector<int>>& adj, int u, int v){
    adj[u].push_back(v);   // u -> v
    adj[v].push_back(u);   // u <- v
}

int main(){

    int n = 3; // size of vector
    std::vector<std::vector<int>>adj(n);

    std::cout << "--BFS algorithm--" << std::endl;


    return 0;

}
