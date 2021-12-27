// Time Complexity: O(V + E)
// Space Complexity: O(V)

#include<bits/stdc++.h> 
using namespace std; 

bool cycle(int i, vector<int>&vis, vector<int>adj[]){
    queue<pair<int, int>> q;

    vis[i] = 1;
    q.push({i, -1});

    while(!q.empty()){
        int node=q.front().first;
        int prev=q.front().second;
        q.pop();

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push({it, node});

            }else if(prev!=it){
                return true;
            }
        }
        
    }
    return false;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


void printGraph(vector<int>adj[], int v){
    for (int i = 0; i<v; i++){
        cout << v;
        for(auto it :adj[v]){
            cout << "->" << it;
        }
        cout << "/n";
    }
}


int main() { 
	int v=6;
	vector<int> adj[v];
	addEdge(adj,1,2); 
	addEdge(adj,2,4); 
	addEdge(adj,3,5); 
	addEdge(adj,5,6); 
	addEdge(adj,5,10);
	addEdge(adj,6,7);
	addEdge(adj,7,8);
	addEdge(adj,8,9);
	addEdge(adj,9,10);

    printGraph(adj, v);

    // vector<int> vis(v+1, 0);

    // for (int i = 1; i < v; i++){
    //     if(!vis[i]){
    //         if(cycle(i, vis, adj)){
    //             return true;
    //         }
    //     }
    //     return false;
    // }

        return 0; 
} 

//https://leetcode.com/discuss/interview-question/1408271/5-cycle-in-an-undirected-graph