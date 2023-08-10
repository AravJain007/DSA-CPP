#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<int> adj[N];
vector<bool> check(N, false);

void depthFirstSearch(int node){
    check[node]=1;
    cout << node << " "; // Preorder
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(!check[*it]){
            check[*it] = 1;
            depthFirstSearch(*it);
        }
    }
    // if we want we can print here to make it Postorder
}

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    depthFirstSearch(1);
}