#include <iostream>
#include <vector>

/*
 * Directed Graph
 * 1->4, 1->2
 * 2->5, 2->5
 * 3->5
 * 4->3, 4->6
 * 5->6
 *
 *
 */

// use vector of vectors to create a 2d dimensional dynamic array
// use reference to avoid creating a copy and work with the original vector
void addEdges(std::vector<std::vector<int>>& adj, int u, int v){
    adj[u].push_back(v);
}

void displayAdjacency(const std::vector<std::vector<int>>&adj){

    // row
    for(int i = 0; i < adj.size(); i++) {
        std::cout << i << ":";
        //column
        for(int j : adj[i]){
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }
}

int main() {

    int n = 3;
    std::vector<std::vector<int>> adj(n);

    addEdges(adj, 1, 0);
    addEdges(adj, 1, 4);
    addEdges(adj, 2, 4);

    std::cout << "Display: " << std::endl;
    displayAdjacency(adj);

    return 0;
}