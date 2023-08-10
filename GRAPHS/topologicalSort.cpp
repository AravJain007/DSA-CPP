#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adjacencyList(n);
    vector<int> indegree(n,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        // x --> y kind of edge here
        adjacencyList[x].push_back(y);
        indegree[y]++;
        /*
        y
         \
          x
        so this is how the graph will be represented therefore we will add indergree of y over here.
        */
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i] == 0)
            q.push(i);
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        vector<int> :: iterator it;
        for(it=adjacencyList[node].begin();it!=adjacencyList[node].end();it++){
            indegree[*it]--;
            if (indegree[*it]==0)
                q.push(*it);
        }
    }
    cout << "\n";
    return 0;
}