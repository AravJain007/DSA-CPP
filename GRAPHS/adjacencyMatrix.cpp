#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n; // For number of Nodes
    int m; // For number of Edges (Connections between the nodes)
    cin >> n >> m; 
    vector<vector<int>> adjacencyMatrix(n+1,vector<int>(n+1,0)); // Undirected Graph
    for(int i=0;i<m;i++){ // Remember to make the updation condition with the number of edges and not number of nodes
        int x,y;
        cin >> x >> y;
        adjacencyMatrix[x][y] = 1;
        adjacencyMatrix[y][x] = 1;
    }
    cout << "Adjacency Matrix of the following graph is : \n";
    for(int i=1;i<n+1;i++){      // We are making it start from 1 and not 0 on purpose
        for(int j=1;j<n+1;j++)
            cout << adjacencyMatrix[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
/*
input - 7   7  This is for inputting m and n.
        1   2
        2   4
        2   5
        2   6
        2   7
        1   3
        3   7
*/