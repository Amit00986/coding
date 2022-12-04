// Shortest Path in undirected graph with unity weight

#include<bits/stdc++.h>
using namespace std;


    void Bfs( vector<int> adj[], int N , int src) {
        vector<int> dist(N, INT_MAX);
        queue<int> q;
        dist[src] = 0;
        q.push(src);

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            for( auto child: adj[node]) {
                if(dist[node] + 1 < dist[child]) { 
                    dist[child] = dist[node] + 1;
                    q.push(child);
                }
              
            }
        }

      for(int i = 0 ; i < N ; i++) cout << dist[i] << " ";
    }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1];          // s.c = 0(N+2Edeges)

    for(int i = 0 ; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    Bfs(adj, n , 0);
    
    return 0;
}