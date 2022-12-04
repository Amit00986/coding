#include<bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[100000];

void makeSet() {
    for(int i = 1; i <=n ; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
}

int findPair(int node) {
    if(node == parent[node])
    {
        return node;
    }
    return parent[node] = findPair(parent[node]);
}

void pair(int u, int v) {
    u = findPair(u);
    v = findPair(v);
    if(rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if(rank[v] < rank[u])
    {
        parent[v] = u;
    }
    else{
        parent[v] = u;
        rank[u]++;
    }
}

void main()
{
    makeSet();
    int m;
    cin >> m;
    while(m--)
    {
        int u, v;
        union(u, v);
    }
}