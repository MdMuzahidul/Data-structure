#include <bits/stdc++.h>
using namespace std;

void BFS(int start, int visited[], vector<int> adj[])
{
    queue<int> qu;
    qu.push(start);
    while (!qu.empty())
    {
        int node = qu.front();
        visited[node] = 1;
        cout << node << " ";
        qu.pop();
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                qu.push(it);
            }
        }
    }
}

int main()
{
    int edge;
    int start;
    int totalNode;
    vector<int> adj[totalNode + 2];
    int visited[totalNode + 2] = {0};
    cin >> totalNode >> edge;
    for (int i = 1; i <= edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >> start;
    BFS(start, visited, adj);
}