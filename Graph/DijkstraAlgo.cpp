// daistra Algorithm
// ShortestPath in Undirected Graph
// It helps to find the shortest path between src and every other nodes.
// T.C= 0(N+E)logN and S.C = O(N) + O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, source;
    cin >> n >> m;
    vector<pair<int, int> >g[n+1];
    int a, b , wt;
    for(int i=0; i<m; i++) {
        cin >> a >> b >> wt;
        g[a].push_back(make_pair(b,wt));
        g[b].push_back(make_pair(a,wt));
    }
    cin >> source;
    // Dijkstra's Algorithm
    priority_queue<pair<int, int>,vector<pair<int, int> >, greater<pair<int, int>> >pq; // min-heap
    vector<int> disTo(n+1, INT_MAX); //

    disTo[source] = 0;
    pq.push(make_pair(0,source)); // ( distance, from )

    while( !pq.empty()) {
        int dist = pq.top().first;
        int prev = pq.top().second;

        vector<pair<int, int> >:: iterator it;

        for(auto it : g[prev]) {
            int next = it.first;
            int nextDist = it.second;

            if( disTo[next] > dist + nextDist) {
                disTo[next] = disTo[prev] + nextDist;
                pq.push(make_pair(disTo[next], next));
            }
        }
    }
    cout << "the distance from source, " << source << ", are : \n";
    for(int i = 1 ; i <=n ; i++) cout << disTo[i] << " ";

    return 0;  
}