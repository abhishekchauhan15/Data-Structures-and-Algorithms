#include <bits/stdc++.h>
using namespace std;



void bfs(int i, vector<int>&adj , vector<int>&vis,queue<int>q, vector<int>ans){
    vis[i]=1;
    q.push(i);

    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);

        for(auto it :adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }


    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}






void topo(vector<int> &adj[], int v)
{

    vector<int> vis(v+1, 0);
    queue<int> q;
    vector<int> ans;
    for (int i = 0; i < v; i++)
    {
        if(!vis[i]){
            bfs(i , adj, vis, q, ans);
        }
    }
    
}

void addEdge(vector<int> &adj[], int u, int v)
{
   adj[u].push_back(v);
}

int main()
{
    int v = 6;
    vector<int> adj[v];

    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);
    addEdge(adj, 4, 0);
    addEdge(adj, 4, 1);
    addEdge(adj, 5, 0);
    addEdge(adj, 5, 1);

    topo(adj, v);

    return 0;
}