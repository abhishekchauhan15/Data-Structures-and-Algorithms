#include<bits/stdc++.h> 
using namespace std;

void und(){
     int n, m;
    cin >> n >> m;
    vector<int> adjlist[n+1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}



void dg(){
     int n, m;
    cin >> n >> m;
    vector<int> adjlist[n+1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adjlist[u].push_back(v);
    }
}


void wdg(){
     int n, m;
    cin >> n >> m;
    vector<pair<int,int>> adjlist[n+1];

    for (int i = 0; i < m; i++)
    {
        int u, v,wt;
        cin >> u >> v>>wt;

        adjlist[u].push_back({v,wt});
        adjlist[v].push_back({u, wt});
    }

}

int main(){


    //for undirected graph
    und();

    //for directed graph
    dg();

    //for weighted graph
    wdg();

    return 0;
}