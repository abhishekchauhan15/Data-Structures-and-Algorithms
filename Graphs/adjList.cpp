#include<bits/stdc++.h> 
using namespace std;

void und(){
     int e, v;
    cin >> e >> v;
    vector<int> adjlist[e+1];

    for (int i = 0; i < v; i++)
    {
        int u, v;
        cin >> u >> v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}



void dg(){
     int e, v;
    cin >> e >> v;
    vector<int> adjlist[e+1];

    for (int i = 0; i < v; i++)
    {
        int u, v;
        cin >> u >> v;

        adjlist[u].push_back(v);
    }
}


void wdg(){
     int e, v;
    cin >> e >> v;
    vector<pair<int,int>> adjlist[e+1];

    for (int i = 0; i < v; i++)
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