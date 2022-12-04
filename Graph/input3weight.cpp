// weighted graph Input

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m, wt;
    cin >> n >> m >> wt;
    vector<pair<int, int> >adj[n+1]; // 

    for(int i = 0 ; i < m; i++)
    {
        int u, v;
        cin >> u >> v >> wt;

        adj[u].push_back({v, wt}); // directed graph m only yahi hoga
        adj[v].push_back({u, wt});

    }
    return 0;
}