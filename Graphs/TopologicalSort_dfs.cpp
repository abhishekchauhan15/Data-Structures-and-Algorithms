// Time Complexity: O(v + E)
// Space Complexity: O(n) + O(n)
//Auxalary space : O(n)

#include<bits/stdc++.h> 
using namespace std; 


void dfs(int node , vector<int>& vis,stack<int>&s, vector<int>adj[]){
    vis[node]=1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,vis, s ,adj);

        }
    }
    s.push(node);
}

vector<int> topologicalSort(vector<int> adj[], int v){
    vector<int>vis(v+1, 0);
    stack<int> s;
    vector<int> ans;

    for (int i = 0; i <v; i++)
    {
        if(!vis[i]){
            dfs(i,vis, s ,adj);
        }
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}


int main() {
    int v = 6;
    vector<int> adj[v];
        addEdge(adj,2,3); 
        addEdge(adj,3,1); 
        addEdge(adj,4,0); 
        addEdge(adj,4,1); 
        addEdge(adj,5,0);
        addEdge(adj,5,1);



    
    vector<int> sol=topologicalSort(adj, v);

    for (int i = 0; i <sol.size(); i++)
    {
        cout << sol[i] << endl;
    }

    return 0; 
}