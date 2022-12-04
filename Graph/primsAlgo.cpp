// Prism Algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int> >adj[N];

    int a, b , wt;
    for(int i = 0 ; i < M ; i++) {
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(b, wt));
        adj[b].push_back(make_pair(a, wt) );
    }

    int parent[N];
    int key[N];
    bool msSet[N];

    for(int i = 0 ; i < N ; i++) {
     key[i] = INT_MAX;
     msSet[i] = false;
     parent[i] = -1;
    }

    key[0] = 0;
    parent[0] = -1;

    for(int count = 0 ; count < N-1 ; count++)
    {
        int mini = INT_MAX, u;
        for(int v = 0; v<N ; v++) 
            if(msSet[v] == false && key[v] < mini)
            mini = key[v], u = v;
            
            
       msSet[u] = true;

    for(auto it : adj[u]) {
        int v = it.first;
        int weight = it.second;
        if(msSet[v] == false && weight < key[v] )
           parent[v] = u , key[v] = weight;

       }    
    }

    for(int i = 1; i < N ; i++)
    {
        cout << parent[i] << "  " << i << " \n";

    }
    return 0;
}