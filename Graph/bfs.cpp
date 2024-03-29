#include<bits/stdc++.h>

using namespace std;

class Soln {
    public:
    vector<int>bfsOnGraph(int v, vector<int>adj[])  {
        vector<int> bfs;
        vector<int>vis(v+1, 0);
        for(int i = 1; i <= v; i++)
        {
            if( !vis[i])
            {
                queue<int>q;
                q.push(i);
                vis[i] = 1;

               while(!q.empty())
              {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for( auto it : adj[node])
                {
                    if( !vis[i])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
              }    
            }
        }
        return bfs;
    }
};