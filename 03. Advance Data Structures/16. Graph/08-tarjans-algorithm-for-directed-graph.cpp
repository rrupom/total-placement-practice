#include<bits/stdc++.h>
#define sz 1000
using namespace std;

vector<int> adj[sz];
vector<vector<int>> component;
int dis[sz], low[sz], timer;
bool visited[sz];
stack<int> st;

void tarjan(int u, int parent) {
    dis[u] = low[u] = ++timer;
    visited[u] = true;
    st.push(u);

    for (int v : adj[u]) {
        if (v == parent) {
            // if the adjacent node is parent node
            continue;
        }

        if (!visited[v]) {
            tarjan(v, u);
            low[u] = min(low[u], low[v]);
        } else {
            // back edge
            low[u] = min(low[u], dis[v]);
        }
    }

    if (low[u] == dis[u]) {
        // starting of a connected componet
        vector<int> temp;

        while (!st.empty()) {
            int v = st.top();
            st.pop();

            temp.push_back(v);

            if (v == u) break;
        }

        component.push_back(temp);
    }
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/Codes/input.txt", "r", stdin);
    freopen("E:/Codes/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nodes, edges, x, y;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
    }

    // for disconnected graph
    for (int i = 0; i < nodes; i++) {
        if (!visited[i]) {
            tarjan(i, -1); // -1 is parent
        }
    }

    cout << "Number of connected components = " << component.size() << endl;

    for (int i = 0; i < component.size(); i++) {
        cout << "Component " << i + 1 << " : ";

        for (int v : component[i]) {
            cout << v << " ";
        }

        cout << endl;
    }


    return 0;
}

/*
input:
5 5
0 1
2 0
1 2
1 3
3 4
*/

/*
output:
Number of connected components = 3
Component 1 : 4
Component 2 : 3
Component 3 : 2 1 0
*/