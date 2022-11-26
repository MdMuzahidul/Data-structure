// #include <bits/stdc++.h>

// using namespace std;

// int vis[10001]; // initially all elements 0
// vector<int> a[10001];

// void dfs(int node)
// {
//     vis[node] = 1;
//     cout << node << " ";

//     for (int i = 0; i < a[node].size(); i++)
//     {
//         int child = a[node][i];

//         if (vis[child] == 0)
//         {
//             dfs(child);
//         }
//     }
//     return;
// }

// int main()
// {
//     int n, m, x, y, i, root;

//     // cout << "Number of vertex : ";
//     // cin >> n;

//     // cout << "Number of edge : ";
//     cin >> m;

//     // cout << "Enter all edges : " << endl;

//     for (i = 1; i <= m; i++)
//     {
//         cin >> x >> y;

//         a[x].push_back(y);
//         a[y].push_back(x);
//     }
//     // cout << "Enter the root node : ";
//     cin >> root;

//     dfs(root);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int vis[], vector<int> a[])
{
    vis[node] = 1;
    cout << node << endl;
    for (int i = 0; i < a[node].size(); i++)
    {
        int xx = a[node][i];
        if (vis[xx] == 0)
        {
            dfs(xx, vis, a);
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int x, y;
    vector<int> a[n + 10];
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    int vis[n + 10] = {0};
    int root;
    cin >> root;
    dfs(root, vis, a);
}