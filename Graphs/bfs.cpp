#include <bits/stdc++.h>
using namespace std;

int main(int v, vector<int>adj[])
{
    int v = 9;
    vector<int> vis(v + 1, 0);
    vector<int> bfs;
    // coz graph may have multiple components;
    for (int i = 0; i < v; i++)
    {
        if (vis[i] != 0)
        {
            // bfs(i);
            queue<int> q;
            q.push(i);
            vis[i] == 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                //pushing the adjecent nodes in queue
               for(auto &it:adj[node]){
                   if(!vis[it]){
                       q.push(it);
                       vis[it] = 1;
                   }
               }
            }
        }
    }

    return bfs;
}