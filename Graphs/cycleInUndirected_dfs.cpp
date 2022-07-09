#include<bits/stdc++.h> 
using namespace std;



bool dfs( int node, int parent, vector<int>&vis, vector<int>adj[] ){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(it,node, vis, adj)){
                return true;
            }
        }else if(it!=parent){
            return true;
        }
    }
    return false;
}



bool isCycle(vector<int>adj[], int v){
    vector<int>vis(v+1, 0);

    for (int i = 1; i<v; i++){
        if(!vis[i]){
           if(dfs(i,-1, vis, adj));
           return true;
        }
    }
    return false;
}



void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


int main(){

    int v = 12;
    vector<int> adj[v];
    addEdge(adj,1,2); 
	addEdge(adj,2,4); 
	addEdge(adj,3,5); 
	addEdge(adj,5,6); 
	addEdge(adj,5,10);
	addEdge(adj,6,7);
	addEdge(adj,7,8);
	addEdge(adj,8,9);
	addEdge(adj,8,11);
	addEdge(adj,9,10);

    // printGraph(adj, v);

    cout<<isCycle(adj, v)<<endl;

    return 0; 
}