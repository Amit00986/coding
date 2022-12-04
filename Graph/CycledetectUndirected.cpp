// Detect Cycle in undirected Graph 

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool checckForCycle( int s, int V, vector<int>adj[], vector<int>& visited)
        {
            // create queue     bfs 
            queue<pair<int, int> >q; // store the nodes and previous of parent

            visited[s] = true; // strting is true
            q.push({s, -1}); // intialize -1

            while(!q.empty())
            {
                int node = q.front().first;
                int par = q.front().second;
                q.pop();
                for( auto it: adj[node]) { // all adjacent nodes
                    if( !visited[it]) {
                        visited[it] = true; 
                        q.push({it, node});
                      }
                      else if( par != it) // if the adjacent nodes in not  previous node
                                          // that is somone has visited
                      {
                        return true;
                      }
                }
            }
            return false;
        }
    public:
        bool isCycle(int V, vector<int>adj[]) {
            vector<int>vis(V+1, 0);  //created a visited array of size N=1 or v+1 and marked as 0 
            for(int i = 1; i <=V; i++)
            {
                if( !vis[i]) {
                    if(checckForCycle(i, V, adj, vis)) return true;
                }
            }
            return false;
        }
};