// DFS = Depth first Search

#include<bits/stdc++.h>

using namespace std;
class Soln 
{
    void dfs(int node, vector<int>vis, vector<int>adj[], vector<int>&storeDfs)
    {
        storeDfs.push_back(node); 
        vis[node] = 1;  // marked visited
        for( auto it: adj[node])  // Traverse for all adjacentary node one by one
        {
            if( !vis[it]) // if not visited then called dfs
            {
                dfs(it, vis, adj, storeDfs);
            }
        }
    }
    public:
    vector<int>dfsOfGraph(int V/*(Number of NOdes)*/, vector<int>adj[] /*Adjacentary list*/)
    {
        vector<int>storeDfs; // store dfs traversal
        vector<int>vis(V+1, 0); // created a visited array of size N=1 or v+1 and marked as 0 
        for(int i = 1 ; i <=V; i++)
        {
            if(!vis[i]) // unvisted then called dfs
            {
                dfs(i, vis, adj, storeDfs);
            }
        }
        return storeDfs;
    }
};

int main()
{

}