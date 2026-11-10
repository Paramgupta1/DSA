class Solution {
public:
    int dfs(int node, vector<vector<pair<int,int>>>& adj,
            vector<bool>& visited) {

        visited[node] = true;
        int count = 0;

        for(auto [next, cost] : adj[node]) {
            if(!visited[next]) {
                count += cost + dfs(next, adj, visited);
            }
        }

        return count;
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);

        for(auto& edge : connections) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back({v, 1});
            adj[v].push_back({u, 0});
        }

        vector<bool> visited(n, false);

        return dfs(0, adj, visited);
    }
};