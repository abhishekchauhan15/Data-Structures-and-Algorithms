#include<bits/stdc++.h> 
using namespace std;


void dfs(int node, vector<int>&vis, vector<int>&storeDfs, vector<int>adj[] ){
    vis[node] = 1;
    storeDfs.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, vis, storeDfs, adj)
        }
    }

}


int main(){
    int v = 7;
    vector<int> adj[];
    vector<int> storeDfs;
    vector<int> vis(v + 1, 0);
    for (int i = 0; i < v+1; i++)
    {
        if(!vis[i]){
            dfs(i, vis, storeDfs, adj);
        }
    }
    // return storeDfs;

    return 0;
}