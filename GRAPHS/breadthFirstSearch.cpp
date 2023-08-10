#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
vector<int> adj[N];

int main(){
    int n,m;
    cin >> n >> m;
    vector<bool> check(n+1);

    for(int i=0;i<n+1;i++)
        check[i] = 0;

    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    queue<int> q;
    q.push(1);
    check[1] = 1;
    
    // Where we are using queue we mostly use while(!q.empty()) for all loops to display in a particular fashion.
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << "\n";
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!check[*it]){
                check[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}